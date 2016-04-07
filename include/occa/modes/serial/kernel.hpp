#ifndef OCCA_SERIAL_KERNEL_HEADER
#define OCCA_SERIAL_KERNEL_HEADER

#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

#include "occa/base.hpp"
#include "occa/sys.hpp"
#include "occa/library.hpp"

namespace occa {
  namespace serial {
    //---[ Data Structs ]---------------
    struct SerialKernelData_t {
      void *dlHandle;
      handleFunction_t handle;

      void *vArgs[2*OCCA_MAX_ARGS];
    };

    struct SerialDeviceData_t {
      int vendor;
    };
    //==================================

    template <>
    kernel_t<Serial>::kernel_t();

    template <>
    kernel_t<Serial>::kernel_t(const kernel_t &k);

    template <>
    kernel_t<Serial>& kernel_t<Serial>::operator = (const kernel_t<Serial> &k);

    template <>
    kernel_t<Serial>::kernel_t(const kernel_t<Serial> &k);

    template <>
    void* kernel_t<Serial>::getKernelHandle();

    template <>
    void* kernel_t<Serial>::getProgramHandle();

    template <>
    std::string kernel_t<Serial>::fixBinaryName(const std::string &filename);

    template <>
    kernel_t<Serial>* kernel_t<Serial>::buildFromSource(const std::string &filename,
                                                        const std::string &functionName,
                                                        const kernelInfo &info_);

    template <>
    kernel_t<Serial>* kernel_t<Serial>::buildFromBinary(const std::string &filename,
                                                        const std::string &functionName);

    template <>
    kernel_t<Serial>* kernel_t<Serial>::loadFromLibrary(const char *cache,
                                                        const std::string &functionName);

    template <>
    uintptr_t kernel_t<Serial>::maximumInnerDimSize();

    template <>
    int kernel_t<Serial>::preferredDimSize();

    template <>
    void kernel_t<Serial>::runFromArguments(const int kArgc, const kernelArg *kArgs);

    template <>
    void kernel_t<Serial>::free();
  }
}

#endif
