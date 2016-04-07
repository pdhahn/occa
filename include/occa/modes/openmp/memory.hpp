#include "occa/defines.hpp"

#if OCCA_OPENMP_ENABLED
#  ifndef OCCA_OPENMP_MEMORY_HEADER
#  define OCCA_OPENMP_MEMORY_HEADER

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
    memory_t<OpenMP>::memory_t();

    template <>
    memory_t<OpenMP>::memory_t(const memory_t &m);

    template <>
    memory_t<OpenMP>& memory_t<OpenMP>::operator = (const memory_t &m);

    template <>
    void* memory_t<OpenMP>::getMemoryHandle();

    template <>
    void* memory_t<OpenMP>::getTextureHandle();

    template <>
    void memory_t<OpenMP>::copyFrom(const void *src,
                                    const uintptr_t bytes,
                                    const uintptr_t offset);

    template <>
    void memory_t<OpenMP>::copyFrom(const memory_v *src,
                                    const uintptr_t bytes,
                                    const uintptr_t destOffset,
                                    const uintptr_t srcOffset);

    template <>
    void memory_t<OpenMP>::copyTo(void *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t destOffset);

    template <>
    void memory_t<OpenMP>::copyTo(memory_v *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t srcOffset,
                                  const uintptr_t offset);

    template <>
    void memory_t<OpenMP>::asyncCopyFrom(const void *src,
                                         const uintptr_t bytes,
                                         const uintptr_t destOffset);

    template <>
    void memory_t<OpenMP>::asyncCopyFrom(const memory_v *src,
                                         const uintptr_t bytes,
                                         const uintptr_t srcOffset,
                                         const uintptr_t offset);

    template <>
    void memory_t<OpenMP>::asyncCopyTo(void *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t offset);

    template <>
    void memory_t<OpenMP>::asyncCopyTo(memory_v *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t destOffset,
                                       const uintptr_t srcOffset);

    template <>
    void memory_t<OpenMP>::mappedFree();

    template <>
    void memory_t<OpenMP>::free();
  }
}

#  endif
#endif
