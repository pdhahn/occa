/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2018 David Medina and Tim Warburton
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */

#include <occa/defines.hpp>

#if OCCA_CUDA_ENABLED

#include <occa/modes/cuda/memory.hpp>
#include <occa/modes/cuda/device.hpp>
#include <occa/modes/cuda/utils.hpp>

namespace occa {
  namespace cuda {
    memory::memory(const occa::properties &properties_) :
      occa::memory_v(properties_),
      cuPtr((CUdeviceptr&) ptr),
      mappedPtr(NULL),
      isManaged(false) {}

    memory::~memory() {}

    kernelArg memory::makeKernelArg() const {
      kernelArgData arg;

      arg.dHandle = dHandle;
      arg.mHandle = const_cast<memory*>(this);

      arg.data.void_ = (void*) &cuPtr;
      arg.size       = sizeof(void*);
      arg.info       = kArgInfo::usePointer;

      return kernelArg(arg);
    }

    memory_v* memory::addOffset(const dim_t offset, bool &needsFree) {
      memory *m = new memory(properties);
      m->cuPtr = cuPtr + offset;
      if (mappedPtr) {
        m->mappedPtr = mappedPtr + offset;
      }
      m->isManaged = isManaged;
      needsFree = false;
      return m;
    }

    void memory::copyFrom(const void *src,
                          const udim_t bytes,
                          const udim_t offset,
                          const occa::properties &props) {
      const CUstream &stream = *((CUstream*) dHandle->currentStream);
      const bool async = props.get("async", false);

      if (!async) {
        OCCA_CUDA_ERROR("Memory: Copy From",
                        cuMemcpyHtoD(cuPtr + offset,
                                     src,
                                     bytes) );
      } else {
        OCCA_CUDA_ERROR("Memory: Async Copy From",
                        cuMemcpyHtoDAsync(cuPtr + offset,
                                          src,
                                          bytes,
                                          stream) );
      }
    }

    void memory::copyFrom(const memory_v *src,
                          const udim_t bytes,
                          const udim_t destOffset,
                          const udim_t srcOffset,
                          const occa::properties &props) {
      const CUstream &stream = *((CUstream*) dHandle->currentStream);
      const bool async = props.get("async", false);

      if (!async) {
        OCCA_CUDA_ERROR("Memory: Copy From",
                        cuMemcpyDtoD(cuPtr + destOffset,
                                     ((memory*) src)->cuPtr + srcOffset,
                                     bytes) );
      } else {
        OCCA_CUDA_ERROR("Memory: Async Copy From",
                        cuMemcpyDtoDAsync(cuPtr + destOffset,
                                          ((memory*) src)->cuPtr + srcOffset,
                                          bytes,
                                          stream) );
      }
    }

    void memory::copyTo(void *dest,
                        const udim_t bytes,
                        const udim_t offset,
                        const occa::properties &props) const {
      const CUstream &stream = *((CUstream*) dHandle->currentStream);
      const bool async = props.get("async", false);

      if (!async) {
        OCCA_CUDA_ERROR("Memory: Copy From",
                        cuMemcpyDtoH(dest,
                                     cuPtr + offset,
                                     bytes) );
      } else {
        OCCA_CUDA_ERROR("Memory: Async Copy From",
                        cuMemcpyDtoHAsync(dest,
                                          cuPtr + offset,
                                          bytes,
                                          stream) );
      }
    }

    void memory::free() {
      if (mappedPtr) {
        OCCA_CUDA_ERROR("Device: mappedFree()",
                        cuMemFreeHost(mappedPtr));
        mappedPtr = NULL;
      } else if (cuPtr) {
        cuMemFree(cuPtr);
        cuPtr = 0;
      }
      size = 0;
    }

    void memory::detach() {
      cuPtr = 0;
      size = 0;
    }
  }
}

#endif
