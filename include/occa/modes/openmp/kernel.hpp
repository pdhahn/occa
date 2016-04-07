#include "occa/defines.hpp"

#if OCCA_OPENMP_ENABLED
#  ifndef OCCA_OPENMP_KERNEL_HEADER
#  define OCCA_OPENMP_KERNEL_HEADER

#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

#include "occa/base.hpp"
#include "occa/library.hpp"

#if (OCCA_OS & (LINUX_OS | OSX_OS))
#  include <dlfcn.h>
#else
#  include <windows.h>
#endif

namespace occa {
  namespace openmp {
    //---[ Data Structs ]---------------
    struct OpenMPKernelData_t {
      void *dlHandle;
      handleFunction_t handle;

      void *vArgs[2*OCCA_MAX_ARGS];
    };

    struct OpenMPDeviceData_t {
      int vendor;
      bool supportsOpenMP;
      std::string OpenMPFlag;
    };
    //==================================


    template <>
    kernel_t<OpenMP>::kernel_t();

    template <>
    kernel_t<OpenMP>::kernel_t(const kernel_t &k);

    template <>
    kernel_t<OpenMP>& kernel_t<OpenMP>::operator = (const kernel_t<OpenMP> &k);

    template <>
    kernel_t<OpenMP>::kernel_t(const kernel_t<OpenMP> &k);

    template <>
    void* kernel_t<OpenMP>::getKernelHandle();

    template <>
    std::string kernel_t<OpenMP>::fixBinaryName(const std::string &filename);

    template <>
    kernel_t<OpenMP>* kernel_t<OpenMP>::buildFromSource(const std::string &filename,
                                                        const std::string &functionName,
                                                        const kernelInfo &info_);

    template <>
    kernel_t<OpenMP>* kernel_t<OpenMP>::buildFromBinary(const std::string &filename,
                                                        const std::string &functionName);

    template <>
    kernel_t<OpenMP>* kernel_t<OpenMP>::loadFromLibrary(const char *cache,
                                                        const std::string &functionName);

    template <>
    uintptr_t kernel_t<OpenMP>::maximumInnerDimSize();

    template <>
    int kernel_t<OpenMP>::preferredDimSize();

    template <>
    void kernel_t<OpenMP>::runFromArguments(const int kArgc, const kernelArg *kArgs);

    template <>
    void kernel_t<OpenMP>::free();
  }
}

#  endif
#endif
