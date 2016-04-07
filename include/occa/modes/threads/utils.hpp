#ifndef OCCA_PTHREADS_UTILS_HEADER
#define OCCA_PTHREADS_UTILS_HEADER

namespace occa {
  namespace pthreads {
    void* limbo(void *args);
    void run(PthreadKernelInfo_t &pArgs);
  }
}

#endif
