#include "occa/Serial.hpp"

namespace occa {
  //---[ Kernel ]---------------------
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
  //==================================


  //---[ Memory ]---------------------
  template <>
  memory_t<Serial>::memory_t(){
    strMode = "Serial";

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
  memory_t<Serial>::memory_t(const memory_t<Serial> &m){
    *this = m;
  }

  template <>
  memory_t<Serial>& memory_t<Serial>::operator = (const memory_t<Serial> &m){
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
  memory_t<Serial>::~memory_t(){}

  template <>
  void* memory_t<Serial>::getMemoryHandle(){
    return handle;
  }

  template <>
  void* memory_t<Serial>::getTextureHandle(){
    return textureInfo.arg;
  }

  template <>
  void memory_t<Serial>::copyFrom(const void *src,
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
  void memory_t<Serial>::copyFrom(const memory_v *src,
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
  void memory_t<Serial>::copyTo(void *dest,
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
  void memory_t<Serial>::copyTo(memory_v *dest,
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
    const void *srcPtr = ((char*) (isATexture()       ? textureInfo.arg       : handle))       + srcOffset;

    ::memcpy(destPtr, srcPtr, bytes_);
  }

  template <>
  void memory_t<Serial>::asyncCopyFrom(const void *src,
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
  void memory_t<Serial>::asyncCopyFrom(const memory_v *src,
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

    void *destPtr      = ((char*) (isATexture()      ? textureInfo.arg      : handle))         + destOffset;
    const void *srcPtr = ((char*) (src->isATexture() ? src->textureInfo.arg : src->handle)) + srcOffset;;

    ::memcpy(destPtr, srcPtr, bytes_);
  }

  template <>
  void memory_t<Serial>::asyncCopyTo(void *dest,
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
  void memory_t<Serial>::asyncCopyTo(memory_v *dest,
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
    const void *srcPtr = ((char*) (isATexture()       ? textureInfo.arg       : handle))       + srcOffset;

    ::memcpy(destPtr, srcPtr, bytes_);
  }

  template <>
  void memory_t<Serial>::mappedFree(){
    sys::free(handle);
    handle    = NULL;
    mappedPtr = NULL;

    size = 0;
  }

  template <>
  void memory_t<Serial>::free(){
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
  //==================================


  //---[ Device ]---------------------
  template <>
  device_t<Serial>::device_t(){
    strMode = "Serial";

    data = NULL;
    uvaEnabled_ = false;
    bytesAllocated = 0;

    getEnvironmentVariables();

    sys::addSharedBinaryFlagsTo(compiler, compilerFlags);
  }

  template <>
  device_t<Serial>::device_t(const device_t<Serial> &d){
    *this = d;
  }

  template <>
  device_t<Serial>& device_t<Serial>::operator = (const device_t<Serial> &d){
    modelID_ = d.modelID_;
    id_      = d.id_;

    data = d.data;

    uvaEnabled_    = d.uvaEnabled_;
    uvaMap         = d.uvaMap;
    uvaDirtyMemory = d.uvaDirtyMemory;

    compiler      = d.compiler;
    compilerFlags = d.compilerFlags;

    bytesAllocated = d.bytesAllocated;

    return *this;
  }

  template <>
  void* device_t<Serial>::getContextHandle(){
    return NULL;
  }

  template <>
  void device_t<Serial>::setup(argInfoMap &aim){
    properties = aim;

    data = new SerialDeviceData_t;

    OCCA_EXTRACT_DATA(Serial, Device);

    data_.vendor = sys::compilerVendor(compiler);

    sys::addSharedBinaryFlagsTo(data_.vendor, compilerFlags);
  }

  template <>
  void device_t<Serial>::addOccaHeadersToInfo(kernelInfo &info_){
    info_.mode = Serial;
  }

  template <>
  std::string device_t<Serial>::getInfoSalt(const kernelInfo &info_){
    std::stringstream salt;

    salt << "Serial"
         << info_.salt()
         << parserVersion
         << compilerEnvScript
         << compiler
         << compilerFlags;

    return salt.str();
  }

  template <>
  deviceIdentifier device_t<Serial>::getIdentifier() const {
    deviceIdentifier dID;

    dID.mode_ = Serial;

#if (OCCA_OS & (LINUX_OS | OSX_OS))
    const bool debugEnabled = (compilerFlags.find("-g") != std::string::npos);
#else
    const bool debugEnabled = (compilerFlags.find("/Od") != std::string::npos);
#endif

    dID.flagMap["compiler"]     = compiler;
    dID.flagMap["debugEnabled"] = (debugEnabled ? "true" : "false");

    for(int i = 0; i <= 3; ++i){
      std::string flag = "-O";
      flag += '0' + i;

      if(compilerFlags.find(flag) != std::string::npos){
        dID.flagMap["optimization"] = '0' + i;
        break;
      }

      if(i == 3)
        dID.flagMap["optimization"] = "None";
    }

    return dID;
  }

  template <>
  void device_t<Serial>::getEnvironmentVariables(){
    char *c_compiler = getenv("OCCA_CXX");

    if(c_compiler != NULL){
      compiler = std::string(c_compiler);
    }
    else{
      c_compiler = getenv("CXX");

      if(c_compiler != NULL){
        compiler = std::string(c_compiler);
      }
      else{
#if (OCCA_OS & (LINUX_OS | OSX_OS))
        compiler = "g++";
#else
        compiler = "cl.exe";
#endif
      }
    }

    char *c_compilerFlags = getenv("OCCA_CXXFLAGS");

#if (OCCA_OS & (LINUX_OS | OSX_OS))
    if(c_compilerFlags != NULL)
      compilerFlags = std::string(c_compilerFlags);
    else{
#  if OCCA_DEBUG_ENABLED
      compilerFlags = "-g";
#  else
      compilerFlags = "";
#  endif
    }
#else
#  if OCCA_DEBUG_ENABLED
    compilerFlags = " /Od";
#  else
    compilerFlags = " /O2";
#  endif

    std::string byteness;

    if(sizeof(void*) == 4)
      byteness = "x86 ";
    else if(sizeof(void*) == 8)
      byteness = "amd64";
    else
      OCCA_CHECK(false, "sizeof(void*) is not equal to 4 or 8");

#  if      (OCCA_VS_VERSION == 1800)
    char *visualStudioTools = getenv("VS120COMNTOOLS");   // MSVC++ 12.0 - Visual Studio 2013
#  elif    (OCCA_VS_VERSION == 1700)
    char *visualStudioTools = getenv("VS110COMNTOOLS");   // MSVC++ 11.0 - Visual Studio 2012
#  else // (OCCA_VS_VERSION == 1600)
    char *visualStudioTools = getenv("VS100COMNTOOLS");   // MSVC++ 10.0 - Visual Studio 2010
#  endif

    if(visualStudioTools != NULL){
      setCompilerEnvScript("\"" + std::string(visualStudioTools) + "..\\..\\VC\\vcvarsall.bat\" " + byteness);
    }
    else{
      std::cout << "WARNING: Visual Studio environment variable not found -> compiler environment (vcvarsall.bat) maybe not correctly setup." << std::endl;
    }
#endif
  }

  template <>
  void device_t<Serial>::appendAvailableDevices(std::vector<device> &dList){
    device d;
    d.setup("Serial");

    dList.push_back(d);
  }

  template <>
  void device_t<Serial>::setCompiler(const std::string &compiler_){
    compiler = compiler_;

    OCCA_EXTRACT_DATA(Serial, Device);

    data_.vendor = sys::compilerVendor(compiler);

    sys::addSharedBinaryFlagsTo(data_.vendor, compilerFlags);
  }

  template <>
  void device_t<Serial>::setCompilerEnvScript(const std::string &compilerEnvScript_){
    compilerEnvScript = compilerEnvScript_;
  }

  template <>
  void device_t<Serial>::setCompilerFlags(const std::string &compilerFlags_){
    OCCA_EXTRACT_DATA(Serial, Device);

    compilerFlags = compilerFlags_;

    sys::addSharedBinaryFlagsTo(data_.vendor, compilerFlags);
  }

  template <>
  void device_t<Serial>::flush(){}

  template <>
  void device_t<Serial>::finish(){}

  template <>
  bool device_t<Serial>::fakesUva(){
    return false;
  }

  template <>
  void device_t<Serial>::waitFor(streamTag tag){}

  template <>
  stream_t device_t<Serial>::createStream(){
    return NULL;
  }

  template <>
  void device_t<Serial>::freeStream(stream_t s){}

  template <>
  stream_t device_t<Serial>::wrapStream(void *handle_){
    return NULL;
  }

  template <>
  streamTag device_t<Serial>::tagStream(){
    streamTag ret;

    ret.tagTime = currentTime();

    return ret;
  }

  template <>
  double device_t<Serial>::timeBetween(const streamTag &startTag, const streamTag &endTag){
    return (endTag.tagTime - startTag.tagTime);
  }

  template <>
  std::string device_t<Serial>::fixBinaryName(const std::string &filename){
#if (OCCA_OS & (LINUX_OS | OSX_OS))
    return filename;
#else
    return (filename + ".dll");
#endif
  }

  template <>
  kernel_v* device_t<Serial>::buildKernelFromSource(const std::string &filename,
                                                    const std::string &functionName,
                                                    const kernelInfo &info_){
    kernel_v *k = new kernel_t<Serial>;
    k->dHandle = this;

    k->buildFromSource(filename, functionName, info_);

    return k;
  }

  template <>
  kernel_v* device_t<Serial>::buildKernelFromBinary(const std::string &filename,
                                                    const std::string &functionName){
    kernel_v *k = new kernel_t<Serial>;
    k->dHandle = this;
    k->buildFromBinary(filename, functionName);
    return k;
  }

  template <>
  void device_t<Serial>::cacheKernelInLibrary(const std::string &filename,
                                              const std::string &functionName,
                                              const kernelInfo &info_){
#if 0
    //---[ Creating shared library ]----
    kernel tmpK = occa::device(this).buildKernelFromSource(filename, functionName, info_);
    tmpK.free();

    kernelInfo info = info_;

    addOccaHeadersToInfo(info);

    std::string cachedBinary = getCachedName(filename, getInfoSalt(info));

#if (OCCA_OS & WINDOWS_OS)
    // Windows requires .dll extension
    cachedBinary = cachedBinary + ".dll";
#endif
    //==================================

    library::infoID_t infoID;

    infoID.modelID    = modelID_;
    infoID.kernelName = functionName;

    library::infoHeader_t &header = library::headerMap[infoID];

    header.fileID = -1;
    header.mode   = Serial;

    const std::string flatDevID = getIdentifier().flattenFlagMap();

    header.flagsOffset = library::addToScratchPad(flatDevID);
    header.flagsBytes  = flatDevID.size();

    header.contentOffset = library::addToScratchPad(cachedBinary);
    header.contentBytes  = cachedBinary.size();

    header.kernelNameOffset = library::addToScratchPad(functionName);
    header.kernelNameBytes  = functionName.size();
#endif
  }

  template <>
  kernel_v* device_t<Serial>::loadKernelFromLibrary(const char *cache,
                                                    const std::string &functionName){
#if 0
    kernel_v *k = new kernel_t<Serial>;
    k->dHandle = this;
    k->loadFromLibrary(cache, functionName);
    return k;
#endif
    return NULL;
  }

  template <>
  memory_v* device_t<Serial>::wrapMemory(void *handle_,
                                         const uintptr_t bytes){
    memory_v *mem = new memory_t<Serial>;

    mem->dHandle = this;
    mem->size    = bytes;
    mem->handle  = handle_;

    mem->memInfo |= memFlag::isAWrapper;

    return mem;
  }

  template <>
  memory_v* device_t<Serial>::wrapTexture(void *handle_,
                                          const int dim, const occa::dim &dims,
                                          occa::formatType type, const int permissions){
    memory_v *mem = new memory_t<Serial>;

    mem->dHandle = this;
    mem->size    = ((dim == 1) ? dims.x : (dims.x * dims.y)) * type.bytes();

    mem->memInfo |= (memFlag::isATexture |
                     memFlag::isAWrapper);

    mem->textureInfo.dim  = dim;

    mem->textureInfo.w = dims.x;
    mem->textureInfo.h = dims.y;
    mem->textureInfo.d = dims.z;

    mem->textureInfo.arg = handle_;

    mem->handle = &(mem->textureInfo);

    return mem;
  }

  template <>
  memory_v* device_t<Serial>::malloc(const uintptr_t bytes,
                                     void *src){
    memory_v *mem = new memory_t<Serial>;

    mem->dHandle = this;
    mem->size    = bytes;

    mem->handle = sys::malloc(bytes);

    if(src != NULL)
      ::memcpy(mem->handle, src, bytes);

    return mem;
  }

  template <>
  memory_v* device_t<Serial>::textureAlloc(const int dim, const occa::dim &dims,
                                           void *src,
                                           occa::formatType type, const int permissions){
    memory_v *mem = new memory_t<Serial>;

    mem->dHandle = this;
    mem->size    = ((dim == 1) ? dims.x : (dims.x * dims.y)) * type.bytes();

    mem->memInfo |= memFlag::isATexture;

    mem->textureInfo.dim  = dim;

    mem->textureInfo.w = dims.x;
    mem->textureInfo.h = dims.y;
    mem->textureInfo.d = dims.z;

    mem->handle = sys::malloc(mem->size);

    ::memcpy(mem->textureInfo.arg, src, mem->size);

    mem->handle = &(mem->textureInfo);

    return mem;
  }

  template <>
  memory_v* device_t<Serial>::mappedAlloc(const uintptr_t bytes,
                                          void *src){
    memory_v *mem = malloc(bytes, src);

    mem->mappedPtr = mem->handle;

    return mem;
  }

  template <>
  uintptr_t device_t<Serial>::memorySize(){
    return sys::installedRAM();
  }

  template <>
  void device_t<Serial>::free(){
    if(data){
      delete (SerialDeviceData_t*) data;
      data = NULL;
    }
  }

  template <>
  int device_t<Serial>::simdWidth(){
    simdWidth_ = OCCA_SIMD_WIDTH;
    return OCCA_SIMD_WIDTH;
  }
  //==================================
}
