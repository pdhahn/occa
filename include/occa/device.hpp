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

#ifndef OCCA_DEVICE_HEADER
#define OCCA_DEVICE_HEADER

#include <iostream>
#include <sstream>

#include <occa/defines.hpp>
#include <occa/uva.hpp>
#include <occa/kernel.hpp>
#include <occa/tools/gc.hpp>

namespace occa {
  class kernel_v; class kernel;
  class memory_v; class memory;
  class device_v; class device;
  class deviceInfo;

  typedef void* stream_t;
  class stream;
  class streamTag;

  typedef std::map<std::string, kernel>   cachedKernelMap;
  typedef cachedKernelMap::iterator       cachedKernelMapIterator;
  typedef cachedKernelMap::const_iterator cCachedKernelMapIterator;

  //---[ device_v ]---------------------
  class device_v : public withRefs {
  public:
    std::string mode;
    occa::properties properties;

    ptrRangeMap uvaMap;
    memoryVector uvaStaleMemory;

    stream_t currentStream;
    std::vector<stream_t> streams;

    udim_t bytesAllocated;

    cachedKernelMap cachedKernels;

    device_v(const occa::properties &properties_);

    //---[ Virtual Methods ]------------
    virtual ~device_v() = 0;
    // Must be able to be called multiple times safely
    virtual void free() = 0;

    virtual void finish() const = 0;

    virtual bool hasSeparateMemorySpace() const = 0;

    hash_t versionedHash() const;
    virtual hash_t hash() const = 0;

    //  |---[ Stream ]------------------
    virtual stream_t createStream() const = 0;
    virtual void freeStream(stream_t s) const = 0;

    virtual streamTag tagStream() const = 0;
    virtual void waitFor(streamTag tag) const = 0;
    virtual double timeBetween(const streamTag &startTag,
                               const streamTag &endTag) const = 0;

    virtual stream_t wrapStream(void *handle_,
                                const occa::properties &props) const = 0;
    //  |===============================

    //  |---[ Kernel ]------------------
    void writeKernelBuildFile(const std::string &filename,
                              const hash_t &kernelHash,
                              const occa::properties &kernelProps,
                              const lang::kernelMetadataMap &metadataMap) const;

    std::string getKernelHash(const std::string &fullHash,
                              const std::string &kernelName);

    std::string getKernelHash(const hash_t &kernelHash,
                              const std::string &kernelName);

    std::string getKernelHash(kernel_v *kernel);

    kernel& getCachedKernel(const hash_t &kernelHash,
                            const std::string &kernelName);

    void removeCachedKernel(kernel_v *kernel);

    virtual kernel_v* buildKernel(const std::string &filename,
                                  const std::string &kernelName,
                                  const hash_t hash,
                                  const occa::properties &props) = 0;

    virtual kernel_v* buildKernelFromBinary(const std::string &filename,
                                            const std::string &kernelName,
                                            const occa::properties &props) = 0;
    //  |===============================

    //  |---[ Memory ]------------------
    virtual memory_v* malloc(const udim_t bytes,
                             const void* src,
                             const occa::properties &props) = 0;

    virtual udim_t memorySize() const = 0;
    //  |===============================
    //==================================
  };
  //====================================

  //---[ device ]-----------------------
  class device {
    friend class kernel;
    friend class memory;

  private:
    mutable device_v *dHandle;

  public:
    device();
    device(device_v *dHandle_);
    device(const occa::properties &props);

    device(const occa::device &d);
    device& operator = (const occa::device &d);
    ~device();

  private:
    void setDHandle(device_v *dhandle_);
    void removeDHandleRef();
    static void removeDHandleRefFrom(device_v *&dhandle_);

  public:
    void dontUseRefs();

    bool operator == (const occa::device &d) const;

    bool isInitialized();

    device_v* getDHandle() const;

    void setup(const occa::properties &props);

    void free();
    static void free(device_v *&dHandle_);

    const std::string& mode() const;

    occa::properties& properties();
    const occa::properties& properties() const;

    occa::properties& kernelProperties();
    const occa::properties& kernelProperties() const;

    occa::properties& memoryProperties();
    const occa::properties& memoryProperties() const;

    hash_t hash() const;

    udim_t memorySize() const;
    udim_t memoryAllocated() const;

    void finish();

    bool hasSeparateMemorySpace();

    //  |---[ Stream ]------------------
    stream createStream();
    void freeStream(stream s);

    stream getStream();
    void setStream(stream s);
    stream wrapStream(void *handle_,
                      const occa::properties &props = occa::properties());

    streamTag tagStream();
    void waitFor(streamTag tag);
    double timeBetween(const streamTag &startTag,
                       const streamTag &endTag);
    //  |===============================

    //  |---[ Kernel ]------------------
    occa::kernel buildKernel(const std::string &filename,
                             const std::string &kernelName,
                             const occa::properties &props = occa::properties()) const;

    occa::kernel buildKernelFromString(const std::string &content,
                                       const std::string &kernelName,
                                       const occa::properties &props = occa::properties()) const;

    occa::kernel buildKernelFromBinary(const std::string &filename,
                                       const std::string &kernelName,
                                       const occa::properties &props = occa::properties()) const;

    void loadKernels(const std::string &library = "");
    //  |===============================

    //  |---[ Memory ]------------------
    occa::memory malloc(const dim_t bytes,
                        const void *src = NULL,
                        const occa::properties &props = occa::properties());

    occa::memory malloc(const dim_t bytes,
                        const occa::memory src,
                        const occa::properties &props = occa::properties());

    occa::memory malloc(const dim_t bytes,
                        const occa::properties &props);

    void* umalloc(const dim_t bytes,
                  const void *src = NULL,
                  const occa::properties &props = occa::properties());

    void* umalloc(const dim_t bytes,
                  const occa::memory src,
                  const occa::properties &props = occa::properties());

    void* umalloc(const dim_t bytes,
                  const occa::properties &props);
    //  |===============================
  };

  template <>
  hash_t hash(const occa::device &device);
  //====================================

  //---[ stream ]-----------------------
  class stream {
  public:
    device_v *dHandle;
    stream_t handle;

    stream();

    stream(device_v *dHandle_,
           stream_t handle_);

    stream(const stream &s);

    stream& operator = (const stream &s);

    void* getHandle(const occa::properties &props = occa::properties());

    void free();
  };

  /*
   * CUDA   : handle = CUevent*
   * OpenCL : handle = cl_event*
   */
  class streamTag {
  public:
    double tagTime;
    void *handle;

    streamTag();
    streamTag(const double tagTime_,
              void *handle_);
  };
  //====================================
}
#endif
