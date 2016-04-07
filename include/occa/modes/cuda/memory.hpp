#if OCCA_CUDA_ENABLED
#  ifndef OCCA_CUDA_MEMORY_HEADER
#  define OCCA_CUDA_MEMORY_HEADER

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
    memory_t<CUDA>::memory_t();

    template <>
    memory_t<CUDA>::memory_t(const memory_t &m);

    template <>
    memory_t<CUDA>& memory_t<CUDA>::operator = (const memory_t &m);

    template <>
    void* memory_t<CUDA>::getMemoryHandle();

    template <>
    void* memory_t<CUDA>::getTextureHandle();

    template <>
    void memory_t<CUDA>::copyFrom(const void *src,
                                  const uintptr_t bytes,
                                  const uintptr_t offset);

    template <>
    void memory_t<CUDA>::copyFrom(const memory_v *src,
                                  const uintptr_t bytes,
                                  const uintptr_t destOffset,
                                  const uintptr_t srcOffset);

    template <>
    void memory_t<CUDA>::copyTo(void *dest,
                                const uintptr_t bytes,
                                const uintptr_t offset);

    template <>
    void memory_t<CUDA>::copyTo(memory_v *dest,
                                const uintptr_t bytes,
                                const uintptr_t destOffset,
                                const uintptr_t srcOffset);

    template <>
    void memory_t<CUDA>::asyncCopyFrom(const void *src,
                                       const uintptr_t bytes,
                                       const uintptr_t offset);

    template <>
    void memory_t<CUDA>::asyncCopyFrom(const memory_v *src,
                                       const uintptr_t bytes,
                                       const uintptr_t destOffset,
                                       const uintptr_t srcOffset);

    template <>
    void memory_t<CUDA>::asyncCopyTo(void *dest,
                                     const uintptr_t bytes,
                                     const uintptr_t offset);

    template <>
    void memory_t<CUDA>::asyncCopyTo(memory_v *dest,
                                     const uintptr_t bytes,
                                     const uintptr_t destOffset,
                                     const uintptr_t srcOffset);

    template <>
    void memory_t<CUDA>::mappedFree();

    template <>
    void memory_t<CUDA>::free();
  }
}

#  endif
#endif
