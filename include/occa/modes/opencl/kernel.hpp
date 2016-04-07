#if OCCA_OPENCL_ENABLED
#  ifndef OCCA_OPENCL_KERNEL_HEADER
#  define OCCA_OPENCL_KERNEL_HEADER

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
    kernel_t<OpenCL>::kernel_t();

    template <>
    kernel_t<OpenCL>::kernel_t(const kernel_t &k);

    template <>
    kernel_t<OpenCL>& kernel_t<OpenCL>::operator = (const kernel_t<OpenCL> &k);

    template <>
    kernel_t<OpenCL>::kernel_t(const kernel_t<OpenCL> &k);

    template <>
    void* kernel_t<OpenCL>::getKernelHandle();

    template <>
    void* kernel_t<OpenCL>::getProgramHandle();

    template <>
    std::string kernel_t<OpenCL>::fixBinaryName(const std::string &filename);

    template <>
    kernel_t<OpenCL>* kernel_t<OpenCL>::buildFromSource(const std::string &filename,
                                                        const std::string &functionName,
                                                        const kernelInfo &info_);

    template <>
    kernel_t<OpenCL>* kernel_t<OpenCL>::buildFromBinary(const std::string &filename,
                                                        const std::string &functionName);

    template <>
    kernel_t<OpenCL>* kernel_t<OpenCL>::loadFromLibrary(const char *cache,
                                                        const std::string &functionName);

    template <>
    uintptr_t kernel_t<OpenCL>::maximumInnerDimSize();

    template <>
    int kernel_t<OpenCL>::preferredDimSize();

    template <>
    void kernel_t<OpenCL>::runFromArguments(const int kArgc, const kernelArg *kArgs);

    template <>
    void kernel_t<OpenCL>::free();
  }
}

#  endif
#endif
