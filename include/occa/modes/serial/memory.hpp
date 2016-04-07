#ifndef OCCA_SERIAL_MEMORY_HEADER
#define OCCA_SERIAL_MEMORY_HEADER

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
    memory_t<Serial>::memory_t();

    template <>
    memory_t<Serial>::memory_t(const memory_t &m);

    template <>
    memory_t<Serial>& memory_t<Serial>::operator = (const memory_t &m);

    template <>
    void* memory_t<Serial>::getMemoryHandle();

    template <>
    void* memory_t<Serial>::getTextureHandle();

    template <>
    void memory_t<Serial>::copyFrom(const void *src,
                                    const uintptr_t bytes,
                                    const uintptr_t offset);

    template <>
    void memory_t<Serial>::copyFrom(const memory_v *src,
                                    const uintptr_t bytes,
                                    const uintptr_t destOffset,
                                    const uintptr_t srcOffset);

    template <>
    void memory_t<Serial>::copyTo(void *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t destOffset);

    template <>
    void memory_t<Serial>::copyTo(memory_v *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t srcOffset,
                                  const uintptr_t offset);

    template <>
    void memory_t<Serial>::asyncCopyFrom(const void *src,
                                         const uintptr_t bytes,
                                         const uintptr_t destOffset);

    template <>
    void memory_t<Serial>::asyncCopyFrom(const memory_v *src,
                                         const uintptr_t bytes,
                                         const uintptr_t srcOffset,
                                         const uintptr_t offset);

    template <>
    void memory_t<Serial>::asyncCopyTo(void *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t offset);

    template <>
    void memory_t<Serial>::asyncCopyTo(memory_v *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t destOffset,
                                       const uintptr_t srcOffset);

    template <>
    void memory_t<Serial>::mappedFree();

    template <>
    void memory_t<Serial>::free();
  }
}

#endif
