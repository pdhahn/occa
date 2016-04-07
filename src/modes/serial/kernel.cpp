#include "occa/Serial.hpp"

namespace occa {
  namespace serial {
    template <>
    kernel_t<Serial>::kernel_t(){
      strMode = "Serial";

      data    = NULL;
      dHandle = NULL;

      dims  = 1;
      inner = occa::dim(1,1,1);
      outer = occa::dim(1,1,1);
    }

    template <>
    kernel_t<Serial>::kernel_t(const kernel_t<Serial> &k){
      *this = k;
    }

    template <>
    kernel_t<Serial>& kernel_t<Serial>::operator = (const kernel_t<Serial> &k){
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
    kernel_t<Serial>::~kernel_t(){}

    template <>
    void* kernel_t<Serial>::getKernelHandle(){
      OCCA_EXTRACT_DATA(Serial, Kernel);

      void *ret;

      ::memcpy(&ret, &data_.handle, sizeof(void*));

      return ret;
    }

    template <>
    void* kernel_t<Serial>::getProgramHandle(){
      OCCA_EXTRACT_DATA(Serial, Kernel);

      return data_.dlHandle;
    }

    template <>
    std::string kernel_t<Serial>::fixBinaryName(const std::string &filename){
#if (OCCA_OS & (LINUX_OS | OSX_OS))
      return filename;
#else
      return (filename + ".dll");
#endif
    }

    template <>
    kernel_t<Serial>* kernel_t<Serial>::buildFromSource(const std::string &filename,
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

      data = new SerialKernelData_t;

      createSourceFileFrom(filename, hashDir, info);

      std::stringstream command;

      if(dHandle->compilerEnvScript.size())
        command << dHandle->compilerEnvScript << " && ";

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
      const std::string occaLib = env::OCCA_DIR + "/lib/libocca_d.lib ";
#  else
      const std::string occaLib = env::OCCA_DIR + "/lib/libocca.lib ";
#  endif

#  if OCCA_CUDA_ENABLED
      const std::string cupath = getenv("CUDA_PATH");
      const std::string cuInc  = cupath + "\\include";
      const std::string cuLib  = cupath + "\\lib\\x64\\cuda.lib ";
#  endif
#  if OCCA_OPENCL_ENABLED
      const std::string clpath = getenv("OPENCL_PATH");
      const std::string clLib  = cpath + "\\lib\\x64\\OpenCL.lib ";
#  endif

      command << dHandle->compiler
              << " /D MC_CL_EXE"
              << " /D OCCA_OS=WINDOWS_OS"
              << " /EHsc"
              << " /wd4244 /wd4800 /wd4804 /wd4018"
              << ' '    << dHandle->compilerFlags
              << ' '    << info.flags
              << " /I"  << env::OCCA_DIR << "/include"
#  if OCCA_CUDA_ENABLED
              << " /I"  << cuInc
#  endif
#  if OCCA_OPENCL_ENABLED
              << " /I"  << clInc
#  endif
              << ' '    << sourceFile
              << " /link " << occaLib
#  if OCCA_CUDA_ENABLED
              << " /link"  << cuLib
#  endif
#  if OCCA_OPENCL_ENABLED
              << " /link"  << clLib
#  endif
              << " /OUT:" << binaryFile
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

      OCCA_EXTRACT_DATA(Serial, Kernel);

      data_.dlHandle = sys::dlopen(binaryFile, hash);
      data_.handle   = sys::dlsym(data_.dlHandle, functionName, hash);

      releaseHash(hash, 0);

      return this;
    }

    template <>
    kernel_t<Serial>* kernel_t<Serial>::buildFromBinary(const std::string &filename,
                                                        const std::string &functionName){

      name = functionName;

      data = new SerialKernelData_t;

      OCCA_EXTRACT_DATA(Serial, Kernel);

      data_.dlHandle = sys::dlopen(filename);
      data_.handle   = sys::dlsym(data_.dlHandle, functionName);

      return this;
    }

    template <>
    kernel_t<Serial>* kernel_t<Serial>::loadFromLibrary(const char *cache,
                                                        const std::string &functionName){
      name = functionName;

      return buildFromBinary(cache, functionName);
    }

    template <>
    uintptr_t kernel_t<Serial>::maximumInnerDimSize(){
      return ((uintptr_t) -1);
    }

    // [-] Missing
    template <>
    int kernel_t<Serial>::preferredDimSize(){
      preferredDimSize_ = OCCA_SIMD_WIDTH;
      return OCCA_SIMD_WIDTH;
    }

    template <>
    void kernel_t<Serial>::runFromArguments(const int kArgc, const kernelArg *kArgs){
      SerialKernelData_t &data_ = *((SerialKernelData_t*) data);
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
    void kernel_t<Serial>::free(){
      OCCA_EXTRACT_DATA(Serial, Kernel);
      sys::dlclose(data_.dlHandle);
    }
  }
}