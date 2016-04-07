#ifndef OCCA_PTHREADS_DEVICE_HEADER
#define OCCA_PTHREADS_DEVICE_HEADER

#if (OCCA_OS & (LINUX_OS | OSX_OS))
#  if (OCCA_OS != WINUX_OS)
#    include <sys/sysctl.h>
#  endif
#  include <pthread.h>
#  include <dlfcn.h>
#else
#  include <intrin.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

#include <queue>

#include "occa/base.hpp"

namespace occa {
  namespace threads {
    //---[ Data Structs ]-----------------
    struct PthreadKernelInfo_t;
    typedef void (*PthreadLaunchHandle_t)(PthreadKernelInfo_t &args);

    // [-] Hard-coded for now
    struct PthreadsDeviceData_t {
      int vendor;

      int coreCount;

      int pThreadCount;
      int schedule;

#if (OCCA_OS & (LINUX_OS | OSX_OS))
      pthread_t tid[50];
#else
      DWORD tid[50];
#endif

      int pendingJobs;

      std::queue<PthreadKernelInfo_t*> pKernelInfo[50];

      mutex_t pendingJobsMutex, kernelMutex;
    };

    struct PthreadsKernelData_t {
      void *dlHandle;
      handleFunction_t handle;

      int pThreadCount;
      int *pendingJobs;

      std::queue<PthreadKernelInfo_t*> *pKernelInfo[50];

      mutex_t *pendingJobsMutex, *kernelMutex;
    };

    struct PthreadWorkerData_t {
      int rank, count;
      int pinnedCore;

      int *pendingJobs;

      std::queue<PthreadKernelInfo_t*> *pKernelInfo;

      mutex_t *pendingJobsMutex, *kernelMutex;
    };

    struct PthreadKernelInfo_t {
      int rank, count;

      handleFunction_t kernelHandle;

      int dims;
      occa::dim inner, outer;

      int argc;
      void **args;
    };

    static const int compact = (1 << 10);
    static const int scatter = (1 << 11);
    static const int manual  = (1 << 12);
    //====================================


    template <>
    device_t<Pthreads>::device_t();

    template <>
    device_t<Pthreads>::device_t(const device_t<Pthreads> &k);

    template <>
    device_t<Pthreads>& device_t<Pthreads>::operator = (const device_t<Pthreads> &k);

    template <>
    void* device_t<Pthreads>::getContextHandle();

    template <>
    void device_t<Pthreads>::setup(argInfoMap &aim);

    template <>
    void device_t<Pthreads>::addOccaHeadersToInfo(kernelInfo &info_);

    template <>
    std::string device_t<Pthreads>::getInfoSalt(const kernelInfo &info_);

    template <>
    deviceIdentifier device_t<Pthreads>::getIdentifier() const;

    template <>
    void device_t<Pthreads>::getEnvironmentVariables();

    template <>
    void device_t<Pthreads>::appendAvailableDevices(std::vector<device> &dList);

    template <>
    void device_t<Pthreads>::setCompiler(const std::string &compiler_);

    template <>
    void device_t<Pthreads>::setCompilerEnvScript(const std::string &compilerEnvScript_);

    template <>
    void device_t<Pthreads>::setCompilerFlags(const std::string &compilerFlags_);

    template <>
    void device_t<Pthreads>::flush();

    template <>
    void device_t<Pthreads>::finish();

    template <>
    void device_t<Pthreads>::waitFor(streamTag tag);

    template <>
    stream_t device_t<Pthreads>::createStream();

    template <>
    void device_t<Pthreads>::freeStream(stream_t s);

    template <>
    stream_t device_t<Pthreads>::wrapStream(void *handle_);

    template <>
    streamTag device_t<Pthreads>::tagStream();

    template <>
    double device_t<Pthreads>::timeBetween(const streamTag &startTag, const streamTag &endTag);

    template <>
    std::string device_t<Pthreads>::fixBinaryName(const std::string &filename);

    template <>
    kernel_v* device_t<Pthreads>::buildKernelFromSource(const std::string &filename,
                                                        const std::string &functionName,
                                                        const kernelInfo &info_);

    template <>
    kernel_v* device_t<Pthreads>::buildKernelFromBinary(const std::string &filename,
                                                        const std::string &functionName);

    template <>
    void device_t<Pthreads>::cacheKernelInLibrary(const std::string &filename,
                                                  const std::string &functionName,
                                                  const kernelInfo &info_);

    template <>
    kernel_v* device_t<Pthreads>::loadKernelFromLibrary(const char *cache,
                                                        const std::string &functionName);

    template <>
    uintptr_t device_t<Pthreads>::memorySize();

    template <>
    void device_t<Pthreads>::free();

    template <>
    memory_v* device_t<Pthreads>::wrapMemory(void *handle_,
                                             const uintptr_t bytes);

    template <>
    memory_v* device_t<Pthreads>::wrapTexture(void *handle_,
                                              const int dim, const occa::dim &dims,
                                              occa::formatType type, const int permissions);

    template <>
    memory_v* device_t<Pthreads>::malloc(const uintptr_t bytes,
                                         void *src);

    template <>
    memory_v* device_t<Pthreads>::textureAlloc(const int dim, const occa::dim &dims,
                                               void *src,
                                               occa::formatType type, const int permissions);

    template <>
    memory_v* device_t<Pthreads>::mappedAlloc(const uintptr_t bytes,
                                              void *src);

    template <>
    int device_t<Pthreads>::simdWidth();
  }
}

#endif
