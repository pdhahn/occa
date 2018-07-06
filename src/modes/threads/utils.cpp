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

#include <occa/tools/sys.hpp>
#include <occa/modes/serial/kernel.hpp>
#include <occa/modes/threads/utils.hpp>

namespace occa {
  namespace threads {
    //---[ Types ]----------------------
    std::string toString(schedule_t s) {
      switch(s) {
      case compact: return "compact";
      case scatter: return "scatter";
      case manual : return "manual";
      }
      return "compact";
    }

    job_t::job_t() {}

    job_t::job_t(const job_t &k) {
      *this = k;
    }

    job_t& job_t::operator = (const job_t &k) {
      rank     = k.rank;
      count    = k.count;
      schedule = k.schedule;

      handle = k.handle;

      dims  = k.dims;
      inner = k.inner;
      outer = k.outer;

      args = k.args;

      return *this;
    }
    //==================================

    //---[ Functions ]------------------
    void* limbo(void *args) {
      workerData_t &data = *((workerData_t*) args);

      sys::pinToCore(data.pinnedCore);

      bool hasJob;
      job_t job;

      while(true) {
        hasJob = false;
        data.jobMutex->lock();
        if (data.jobs->size()) {
          hasJob = true;
          job    = data.jobs->front();
          data.jobs->pop();
        }
        data.jobMutex->unlock();

        if (hasJob) {
          run(job);
        }
      }

      return NULL;
    }

    void run(job_t &job) {
      functionPtr_t tmpKernel = (functionPtr_t) job.handle;

      sys::runFunction(tmpKernel,
                       (int) job.args.size(),
                       &(job.args[0]));
    }
    //==================================
  }
}
