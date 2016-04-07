#if OCCA_CUDA_ENABLED
#  ifndef OCCA_CUDA_KERNEL_HEADER
#  define OCCA_CUDA_KERNEL_HEADER

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
    kernel_t<CUDA>::kernel_t();

    template <>
    kernel_t<CUDA>::kernel_t(const kernel_t &k);

    template <>
    kernel_t<CUDA>& kernel_t<CUDA>::operator = (const kernel_t<CUDA> &k);

    template <>
    kernel_t<CUDA>::kernel_t(const kernel_t<CUDA> &k);

    template <>
    void* kernel_t<CUDA>::getKernelHandle();

    template <>
    void* kernel_t<CUDA>::getProgramHandle();

    template <>
    std::string kernel_t<CUDA>::fixBinaryName(const std::string &filename);

    template <>
    kernel_t<CUDA>* kernel_t<CUDA>::buildFromSource(const std::string &filename,
                                                    const std::string &functionName,
                                                    const kernelInfo &info_);

    template <>
    kernel_t<CUDA>* kernel_t<CUDA>::buildFromBinary(const std::string &filename,
                                                    const std::string &functionName);

    template <>
    kernel_t<CUDA>* kernel_t<CUDA>::loadFromLibrary(const char *cache,
                                                    const std::string &functionName);

    template <>
    uintptr_t kernel_t<CUDA>::maximumInnerDimSize();

    template <>
    int kernel_t<CUDA>::preferredDimSize();

    template <>
    void kernel_t<CUDA>::runFromArguments(const int kArgc, const kernelArg *kArgs);

    template <>
    void kernel_t<CUDA>::free();
  }
}

#  endif
#endif
