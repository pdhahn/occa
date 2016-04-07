#if OCCA_OPENCL_ENABLED
#  ifndef OCCA_OPENCL_MEMORY_HEADER
#  define OCCA_OPENCL_MEMORY_HEADER

#include "occa/base.hpp"
#include "occa/library.hpp"

#include "occa/defines.hpp"

#if   (OCCA_OS & LINUX_OS)
#  include <CL/cl.h>
#  include <CL/cl_gl.h>
#elif (OCCA_OS & OSX_OS)
#  include <OpenCL/OpenCl.h>
#else
#  include "CL/opencl.h"
#endif

namespace occa {
  namespace opencl {
    //---[ Data Structs ]-----------------
    struct OpenCLKernelData_t {
      int platform, device;

      cl_platform_id platformID;
      cl_device_id   deviceID;
      cl_context     context;
      cl_program     program;
      cl_kernel      kernel;
    };

    struct OpenCLDeviceData_t {
      int platform, device;

      cl_platform_id platformID;
      cl_device_id   deviceID;
      cl_context     context;
    };
    //====================================

    template <>
    memory_t<OpenCL>::memory_t();

    template <>
    memory_t<OpenCL>::memory_t(const memory_t &m);

    template <>
    memory_t<OpenCL>& memory_t<OpenCL>::operator = (const memory_t &m);

    template <>
    void* memory_t<OpenCL>::getMemoryHandle();

    template <>
    void* memory_t<OpenCL>::getTextureHandle();

    template <>
    void memory_t<OpenCL>::copyFrom(const void *src,
                                    const uintptr_t bytes,
                                    const uintptr_t offset);

    template <>
    void memory_t<OpenCL>::copyFrom(const memory_v *src,
                                    const uintptr_t bytes,
                                    const uintptr_t destOffset,
                                    const uintptr_t srcOffset);

    template <>
    void memory_t<OpenCL>::copyTo(void *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t offset);

    template <>
    void memory_t<OpenCL>::copyTo(memory_v *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t destOffset,
                                  const uintptr_t srcOffset);

    template <>
    void memory_t<OpenCL>::asyncCopyFrom(const void *src,
                                         const uintptr_t bytes,
                                         const uintptr_t destOffset);

    template <>
    void memory_t<OpenCL>::asyncCopyFrom(const memory_v *src,
                                         const uintptr_t bytes,
                                         const uintptr_t srcOffset,
                                         const uintptr_t offset);

    template <>
    void memory_t<OpenCL>::asyncCopyTo(void *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t offset);

    template <>
    void memory_t<OpenCL>::asyncCopyTo(memory_v *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t destOffset,
                                       const uintptr_t srcOffset);

    template <>
    void memory_t<OpenCL>::mappedFree();

    template <>
    void memory_t<OpenCL>::free();
  }
}

#  endif
#endif
