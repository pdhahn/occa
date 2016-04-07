#include "occa/defines.hpp"

#if OCCA_OPENMP_ENABLED

#include "occa/Serial.hpp"
#include "occa/OpenMP.hpp"

#include <omp.h>

namespace occa {
  namespace openmp {
    template <>
    kernel_t<OpenMP>::kernel_t(){
      strMode = "OpenMP";

      data    = NULL;
      dHandle = NULL;

      dims  = 1;
      inner = occa::dim(1,1,1);
      outer = occa::dim(1,1,1);
    }

    template <>
    kernel_t<OpenMP>::kernel_t(const kernel_t<OpenMP> &k){
      *this = k;
    }

    template <>
    kernel_t<OpenMP>& kernel_t<OpenMP>::operator = (const kernel_t<OpenMP> &k){
      data    = k.data;
      dHandle = k.dHandle;

      metaInfo = k.metaInfo;

      dims  = k.dims;
      inner = k.inner;
      outer = k.outer;

      nestedKernels = k.nestedKernels;

      return *this;
    }

    template <>
    kernel_t<OpenMP>::~kernel_t(){}

    template <>
    void* kernel_t<OpenMP>::getKernelHandle(){
      OCCA_EXTRACT_DATA(OpenMP, Kernel);

      void *ret;

      ::memcpy(&ret, &data_.handle, sizeof(void*));

      return ret;
    }

    template <>
    void* kernel_t<OpenMP>::getProgramHandle(){
      OCCA_EXTRACT_DATA(OpenMP, Kernel);

      return data_.dlHandle;
    }

    template <>
    std::string kernel_t<OpenMP>::fixBinaryName(const std::string &filename){
#if (OCCA_OS & (LINUX_OS | OSX_OS))
      return filename;
#else
      return (filename + ".dll");
#endif
    }

    template <>
    kernel_t<OpenMP>* kernel_t<OpenMP>::buildFromSource(const std::string &filename,
                                                        const std::string &functionName,
                                                        const kernelInfo &info_){

      name = functionName;

      kernelInfo info = info_;

      dHandle->addOccaHeadersToInfo(info);

      const std::string hash = getFileContentHash(filename,
                                                  dHandle->getInfoSalt(info));

      const std::string hashDir    = hashDirFor(filename, hash);
      const std::string sourceFile = hashDir + kc::sourceFile;
      const std::string binaryFile = hashDir + fixBinaryName(kc::binaryFile);
      bool foundBinary = true;

      if (!haveHash(hash, 0))
        waitForHash(hash, 0);
      else if (sys::fileExists(binaryFile))
        releaseHash(hash, 0);
      else
        foundBinary = false;

      if (foundBinary) {
        if(verboseCompilation_f)
          std::cout << "Found cached binary of [" << compressFilename(filename) << "] in [" << compressFilename(binaryFile) << "]\n";

        return buildFromBinary(binaryFile, functionName);
      }

      data = new OpenMPKernelData_t;

      createSourceFileFrom(filename, hashDir, info);

      std::stringstream command;

      if(dHandle->compilerEnvScript.size())
        command << dHandle->compilerEnvScript << " && ";

      //---[ Check if compiler flag is added ]------
      OpenMPDeviceData_t &dData_ = *((OpenMPDeviceData_t*) dHandle->data);

      const std::string ompFlag = dData_.OpenMPFlag;

      if((dHandle->compilerFlags.find(ompFlag) == std::string::npos) &&
         (            info.flags.find(ompFlag) == std::string::npos)){

        info.flags += ' ';
        info.flags += ompFlag;
      }
      //============================================

#if (OCCA_OS & (LINUX_OS | OSX_OS))
      command << dHandle->compiler
              << ' '    << dHandle->compilerFlags
              << ' '    << info.flags
              << ' '    << sourceFile
              << " -o " << binaryFile
              << " -I"  << env::OCCA_DIR << "/include"
              << " -L"  << env::OCCA_DIR << "/lib -locca"
              << std::endl;
#else
#  if (OCCA_DEBUG_ENABLED)
      std::string occaLib = env::OCCA_DIR + "\\lib\\libocca_d.lib ";
#  else
      std::string occaLib = env::OCCA_DIR + "\\lib\\libocca.lib ";
#  endif

      std::string ptLib   = env::OCCA_DIR + "\\lib\\pthreadVC2.lib ";

      command << dHandle->compiler
              << " /D MC_CL_EXE"
              << ' '    << dHandle->compilerFlags
              << ' '    << info.flags
              << " /I"  << env::OCCA_DIR << "\\include"
              << ' '    << sourceFile
              << " /link " << occaLib << ptLib << " /OUT:" << binaryFile
              << std::endl;
#endif

      const std::string &sCommand = command.str();

      if(verboseCompilation_f)
        std::cout << "Compiling [" << functionName << "]\n" << sCommand << "\n";

#if (OCCA_OS & (LINUX_OS | OSX_OS))
      const int compileError = system(sCommand.c_str());
#else
      const int compileError = system(("\"" +  sCommand + "\"").c_str());
#endif

      if(compileError){
        releaseHash(hash, 0);
        OCCA_CHECK(false, "Compilation error");
      }

      OCCA_EXTRACT_DATA(OpenMP, Kernel);

      data_.dlHandle = sys::dlopen(binaryFile, hash);
      data_.handle   = sys::dlsym(data_.dlHandle, functionName, hash);

      releaseHash(hash, 0);

      return this;
    }

    template <>
    kernel_t<OpenMP>* kernel_t<OpenMP>::buildFromBinary(const std::string &filename,
                                                        const std::string &functionName){

      name = functionName;

      data = new OpenMPKernelData_t;

      OCCA_EXTRACT_DATA(OpenMP, Kernel);

      data_.dlHandle = sys::dlopen(filename);
      data_.handle   = sys::dlsym(data_.dlHandle, functionName);

      return this;
    }

    template <>
    kernel_t<OpenMP>* kernel_t<OpenMP>::loadFromLibrary(const char *cache,
                                                        const std::string &functionName){
      return buildFromBinary(cache, functionName);
    }

    template <>
    uintptr_t kernel_t<OpenMP>::maximumInnerDimSize(){
      return ((uintptr_t) -1);
    }

    // [-] Missing
    template <>
    int kernel_t<OpenMP>::preferredDimSize(){
      preferredDimSize_ = OCCA_SIMD_WIDTH;
      return OCCA_SIMD_WIDTH;
    }


    template <>
    void kernel_t<OpenMP>::runFromArguments(const int kArgc, const kernelArg *kArgs){
      OpenMPKernelData_t &data_ = *((OpenMPKernelData_t*) data);
      handleFunction_t tmpKernel = (handleFunction_t) data_.handle;
      int occaKernelArgs[6];

      occaKernelArgs[0] = outer.z; occaKernelArgs[3] = inner.z;
      occaKernelArgs[1] = outer.y; occaKernelArgs[4] = inner.y;
      occaKernelArgs[2] = outer.x; occaKernelArgs[5] = inner.x;

      int argc = 0;
      for(int i = 0; i < kArgc; ++i){
        for(int j = 0; j < kArgs[i].argc; ++j){
          data_.vArgs[argc++] = kArgs[i].args[j].ptr();
        }
      }

      int occaInnerId0 = 0, occaInnerId1 = 0, occaInnerId2 = 0;

      sys::runFunction(tmpKernel,
                       occaKernelArgs,
                       occaInnerId0, occaInnerId1, occaInnerId2,
                       argc, data_.vArgs);
    }

    template <>
    void kernel_t<OpenMP>::free(){
      OCCA_EXTRACT_DATA(OpenMP, Kernel);

#if (OCCA_OS & (LINUX_OS | OSX_OS))
      dlclose(data_.dlHandle);
#else
      FreeLibrary((HMODULE) (data_.dlHandle));
#endif
    }
    //==================================


    //---[ Memory ]---------------------
    template <>
    memory_t<OpenMP>::memory_t(){
      strMode = "OpenMP";

      memInfo = memFlag::none;

      handle    = NULL;
      mappedPtr = NULL;
      uvaPtr    = NULL;

      dHandle = NULL;
      size    = 0;

      textureInfo.arg = NULL;
      textureInfo.dim = 1;
      textureInfo.w = textureInfo.h = textureInfo.d = 0;
    }

    template <>
    memory_t<OpenMP>::memory_t(const memory_t<OpenMP> &m){
      *this = m;
    }

    template <>
    memory_t<OpenMP>& memory_t<OpenMP>::operator = (const memory_t<OpenMP> &m){
      memInfo = m.memInfo;

      handle    = m.handle;
      mappedPtr = m.mappedPtr;
      uvaPtr    = m.uvaPtr;

      dHandle = m.dHandle;
      size    = m.size;

      textureInfo.arg  = m.textureInfo.arg;
      textureInfo.dim  = m.textureInfo.dim;

      textureInfo.w = m.textureInfo.w;
      textureInfo.h = m.textureInfo.h;
      textureInfo.d = m.textureInfo.d;

      if(isATexture())
        handle = &textureInfo;

      return *this;
    }

    template <>
    memory_t<OpenMP>::~memory_t(){}

    template <>
    void* memory_t<OpenMP>::getMemoryHandle(){
      return handle;
    }

    template <>
    void* memory_t<OpenMP>::getTextureHandle(){
      return textureInfo.arg;
    }

    template <>
    void memory_t<OpenMP>::copyFrom(const void *src,
                                    const uintptr_t bytes,
                                    const uintptr_t offset){
      dHandle->finish();

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      void *destPtr      = ((char*) (isATexture() ? textureInfo.arg : handle)) + offset;
      const void *srcPtr = src;

      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::copyFrom(const memory_v *src,
                                    const uintptr_t bytes,
                                    const uintptr_t destOffset,
                                    const uintptr_t srcOffset){
      dHandle->finish();

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + destOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + srcOffset) <= src->size,
                 "Source has size [" << src->size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      void *destPtr      = ((char*) (isATexture()      ? textureInfo.arg      : handle))      + destOffset;
      const void *srcPtr = ((char*) (src->isATexture() ? src->textureInfo.arg : src->handle)) + srcOffset;

      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::copyTo(void *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t offset){
      dHandle->finish();

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      void *destPtr      = dest;
      const void *srcPtr = ((char*) (isATexture() ? textureInfo.arg : handle)) + offset;

      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::copyTo(memory_v *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t destOffset,
                                  const uintptr_t srcOffset){
      dHandle->finish();

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + srcOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + destOffset) <= dest->size,
                 "Destination has size [" << dest->size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      void *destPtr      = ((char*) (dest->isATexture() ? dest->textureInfo.arg : dest->handle)) + destOffset;
      const void *srcPtr = ((char*) (isATexture() ? textureInfo.arg : handle))       + srcOffset;

      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::asyncCopyFrom(const void *src,
                                         const uintptr_t bytes,
                                         const uintptr_t offset){
      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      void *destPtr      = ((char*) (isATexture() ? textureInfo.arg : handle)) + offset;
      const void *srcPtr = src;


      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::asyncCopyFrom(const memory_v *src,
                                         const uintptr_t bytes,
                                         const uintptr_t destOffset,
                                         const uintptr_t srcOffset){
      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + destOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + srcOffset) <= src->size,
                 "Source has size [" << src->size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      void *destPtr      = ((char*) (isATexture()      ? textureInfo.arg      : handle))      + destOffset;
      const void *srcPtr = ((char*) (src->isATexture() ? src->textureInfo.arg : src->handle)) + srcOffset;

      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::asyncCopyTo(void *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t offset){
      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      void *destPtr      = dest;
      const void *srcPtr = ((char*) (isATexture() ? textureInfo.arg : handle)) + offset;

      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::asyncCopyTo(memory_v *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t destOffset,
                                       const uintptr_t srcOffset){
      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + srcOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + destOffset) <= dest->size,
                 "Destination has size [" << dest->size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      void *destPtr      = ((char*) (dest->isATexture() ? dest->textureInfo.arg : dest->handle)) + destOffset;
      const void *srcPtr = ((char*) (isATexture() ? textureInfo.arg : handle))       + srcOffset;

      ::memcpy(destPtr, srcPtr, bytes_);
    }

    template <>
    void memory_t<OpenMP>::mappedFree(){
      sys::free(handle);
      handle    = NULL;
      mappedPtr = NULL;

      size = 0;
    }

    template <>
    void memory_t<OpenMP>::free(){
      if(isATexture()){
        sys::free(textureInfo.arg);
        textureInfo.arg = NULL;
      }
      else{
        sys::free(handle);
        handle = NULL;
      }

      size = 0;
    }
  }
}

#endif