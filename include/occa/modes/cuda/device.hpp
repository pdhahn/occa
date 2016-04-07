#if OCCA_CUDA_ENABLED
#  ifndef OCCA_CUDA_DEVICE_HEADER
#  define OCCA_CUDA_DEVICE_HEADER

#include "occa/base.hpp"
#include "occa/library.hpp"

#include "occa/defines.hpp"

#include <cuda.h>

namespace occa {
  namespace cuda {
    //---[ Data Structs ]---------------
    struct CUDAKernelData_t {
      CUdevice   device;
      CUcontext  context;
      CUmodule   module;
      CUfunction function;

      void **vArgs;
    };

    struct CUDADeviceData_t {
      CUdevice  device;
      CUcontext context;
      bool p2pEnabled;
    };

    struct CUDATextureData_t {
      CUarray array;
      CUsurfObject surface;
    };
    //==================================

    template <>
    device_t<CUDA>::device_t();

    template <>
    device_t<CUDA>::device_t(const device_t<CUDA> &k);

    template <>
    device_t<CUDA>& device_t<CUDA>::operator = (const device_t<CUDA> &k);

    template <>
    void* device_t<CUDA>::getContextHandle();

    template <>
    void device_t<CUDA>::setup(argInfoMap &aim);

    template <>
    void device_t<CUDA>::addOccaHeadersToInfo(kernelInfo &info_);

    template <>
    std::string device_t<CUDA>::getInfoSalt(const kernelInfo &info_);

    template <>
    deviceIdentifier device_t<CUDA>::getIdentifier() const;

    template <>
    void device_t<CUDA>::getEnvironmentVariables();

    template <>
    void device_t<CUDA>::appendAvailableDevices(std::vector<device> &dList);

    template <>
    void device_t<CUDA>::setCompiler(const std::string &compiler_);

    template <>
    void device_t<CUDA>::setCompilerEnvScript(const std::string &compilerEnvScript_);

    template <>
    void device_t<CUDA>::setCompilerFlags(const std::string &compilerFlags_);

    template <>
    void device_t<CUDA>::flush();

    template <>
    void device_t<CUDA>::finish();

    template <>
    void device_t<CUDA>::waitFor(streamTag tag);

    template <>
    stream_t device_t<CUDA>::createStream();

    template <>
    void device_t<CUDA>::freeStream(stream_t s);

    template <>
    stream_t device_t<CUDA>::wrapStream(void *handle_);

    template <>
    streamTag device_t<CUDA>::tagStream();

    template <>
    double device_t<CUDA>::timeBetween(const streamTag &startTag, const streamTag &endTag);

    template <>
    std::string device_t<CUDA>::fixBinaryName(const std::string &filename);

    template <>
    kernel_v* device_t<CUDA>::buildKernelFromSource(const std::string &filename,
                                                    const std::string &functionName,
                                                    const kernelInfo &info_);

    template <>
    kernel_v* device_t<CUDA>::buildKernelFromBinary(const std::string &filename,
                                                    const std::string &functionName);

    template <>
    void device_t<CUDA>::cacheKernelInLibrary(const std::string &filename,
                                              const std::string &functionName,
                                              const kernelInfo &info_);

    template <>
    kernel_v* device_t<CUDA>::loadKernelFromLibrary(const char *cache,
                                                    const std::string &functionName);

    template <>
    memory_v* device_t<CUDA>::wrapMemory(void *handle_,
                                         const uintptr_t bytes);

    template <>
    memory_v* device_t<CUDA>::wrapTexture(void *handle_,
                                          const int dim, const occa::dim &dims,
                                          occa::formatType type, const int permissions);

    template <>
    memory_v* device_t<CUDA>::malloc(const uintptr_t bytes,
                                     void *src);

    template <>
    memory_v* device_t<CUDA>::textureAlloc(const int dim, const occa::dim &dims,
                                           void *src,
                                           occa::formatType type, const int permissions);

    template <>
    memory_v* device_t<CUDA>::mappedAlloc(const uintptr_t bytes,
                                          void *src);

    template <>
    uintptr_t device_t<CUDA>::memorySize();

    template <>
    void device_t<CUDA>::free();

    template <>
    int device_t<CUDA>::simdWidth();
  }
}

#  endif
#endif
