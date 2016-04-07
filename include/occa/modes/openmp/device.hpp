#include "occa/defines.hpp"

#if OCCA_OPENMP_ENABLED
#  ifndef OCCA_OPENMP_DEVICE_HEADER
#  define OCCA_OPENMP_DEVICE_HEADER

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
    device_t<OpenMP>::device_t();

    template <>
    device_t<OpenMP>::device_t(const device_t<OpenMP> &k);

    template <>
    device_t<OpenMP>& device_t<OpenMP>::operator = (const device_t<OpenMP> &k);

    template <>
    void* device_t<OpenMP>::getContextHandle();

    template <>
    void device_t<OpenMP>::setup(argInfoMap &aim);

    template <>
    void device_t<OpenMP>::addOccaHeadersToInfo(kernelInfo &info_);

    template <>
    std::string device_t<OpenMP>::getInfoSalt(const kernelInfo &info_);

    template <>
    deviceIdentifier device_t<OpenMP>::getIdentifier() const;

    template <>
    void device_t<OpenMP>::getEnvironmentVariables();

    template <>
    void device_t<OpenMP>::appendAvailableDevices(std::vector<device> &dList);

    template <>
    void device_t<OpenMP>::setCompiler(const std::string &compiler_);

    template <>
    void device_t<OpenMP>::setCompilerEnvScript(const std::string &compilerEnvScript_);

    template <>
    void device_t<OpenMP>::setCompilerFlags(const std::string &compilerFlags_);

    template <>
    void device_t<OpenMP>::flush();

    template <>
    void device_t<OpenMP>::finish();

    template <>
    void device_t<OpenMP>::waitFor(streamTag tag);

    template <>
    stream_t device_t<OpenMP>::createStream();

    template <>
    void device_t<OpenMP>::freeStream(stream_t s);

    template <>
    stream_t device_t<OpenMP>::wrapStream(void *handle_);

    template <>
    streamTag device_t<OpenMP>::tagStream();

    template <>
    double device_t<OpenMP>::timeBetween(const streamTag &startTag, const streamTag &endTag);

    template <>
    std::string device_t<OpenMP>::fixBinaryName(const std::string &filename);

    template <>
    kernel_v* device_t<OpenMP>::buildKernelFromSource(const std::string &filename,
                                                      const std::string &functionName,
                                                      const kernelInfo &info_);

    template <>
    kernel_v* device_t<OpenMP>::buildKernelFromBinary(const std::string &filename,
                                                      const std::string &functionName);

    template <>
    void device_t<OpenMP>::cacheKernelInLibrary(const std::string &filename,
                                                const std::string &functionName,
                                                const kernelInfo &info_);

    template <>
    kernel_v* device_t<OpenMP>::loadKernelFromLibrary(const char *cache,
                                                      const std::string &functionName);

    template <>
    memory_v* device_t<OpenMP>::wrapMemory(void *handle_,
                                           const uintptr_t bytes);

    template <>
    memory_v* device_t<OpenMP>::wrapTexture(void *handle_,
                                            const int dim, const occa::dim &dims,
                                            occa::formatType type, const int permissions);

    template <>
    memory_v* device_t<OpenMP>::malloc(const uintptr_t bytes,
                                       void *src);

    template <>
    memory_v* device_t<OpenMP>::textureAlloc(const int dim, const occa::dim &dims,
                                             void *src,
                                             occa::formatType type, const int permissions);

    template <>
    memory_v* device_t<OpenMP>::mappedAlloc(const uintptr_t bytes,
                                            void *src);

    template <>
    uintptr_t device_t<OpenMP>::memorySize();

    template <>
    void device_t<OpenMP>::free();

    template <>
    int device_t<OpenMP>::simdWidth();
  }
}

#  endif
#endif
