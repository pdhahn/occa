#ifndef OCCA_PTHREADS_KERNEL_HEADER
#define OCCA_PTHREADS_KERNEL_HEADER

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
    kernel_t<Pthreads>::kernel_t();

    template <>
    kernel_t<Pthreads>::kernel_t(const kernel_t &k);

    template <>
    kernel_t<Pthreads>& kernel_t<Pthreads>::operator = (const kernel_t<Pthreads> &k);

    template <>
    kernel_t<Pthreads>::kernel_t(const kernel_t<Pthreads> &k);

    template <>
    void* kernel_t<Pthreads>::getKernelHandle();

    template <>
    void* kernel_t<Pthreads>::getProgramHandle();

    template <>
    void* kernel_t<Pthreads>::getProgramHandle();

    template <>
    std::string kernel_t<Pthreads>::fixBinaryName(const std::string &filename);

    template <>
    kernel_t<Pthreads>* kernel_t<Pthreads>::buildFromSource(const std::string &filename,
                                                            const std::string &functionName,
                                                            const kernelInfo &info_);

    template <>
    kernel_t<Pthreads>* kernel_t<Pthreads>::buildFromBinary(const std::string &filename,
                                                            const std::string &functionName);

    template <>
    kernel_t<Pthreads>* kernel_t<Pthreads>::loadFromLibrary(const char *cache,
                                                            const std::string &functionName);

    template <>
    uintptr_t kernel_t<Pthreads>::maximumInnerDimSize();

    template <>
    int kernel_t<Pthreads>::preferredDimSize();

    template <>
    void kernel_t<Pthreads>::runFromArguments(const int kArgc, const kernelArg *kArgs);

    template <>
    void kernel_t<Pthreads>::free();
  }
}

#endif
