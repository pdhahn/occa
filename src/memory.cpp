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

#include <map>

#include <occa/base.hpp>
#include <occa/memory.hpp>
#include <occa/device.hpp>
#include <occa/modes/serial/memory.hpp>
#include <occa/uva.hpp>
#include <occa/tools/sys.hpp>

namespace occa {
  //---[ memory_v ]---------------------
  memory_v::memory_v(const occa::properties &properties_) {
    memInfo = uvaFlag::none;
    properties = properties_;

    ptr    = NULL;
    uvaPtr = NULL;

    dHandle = NULL;
    size    = 0;
  }

  memory_v::~memory_v() {}

  bool memory_v::isManaged() const {
    return (memInfo & uvaFlag::isManaged);
  }

  bool memory_v::inDevice() const {
    return (memInfo & uvaFlag::inDevice);
  }

  bool memory_v::isStale() const {
    return (memInfo & uvaFlag::isStale);
  }

  //---[ memory ]-----------------------
  memory::memory() :
    mHandle(NULL) {}

  memory::memory(void *uvaPtr) :
    mHandle(NULL) {
    ptrRangeMap::iterator it = uvaMap.find(uvaPtr);
    if (it != uvaMap.end()) {
      setMHandle(it->second);
    } else {
      setMHandle((memory_v*) uvaPtr);
    }
  }

  memory::memory(memory_v *mHandle_) :
    mHandle(NULL) {
    setMHandle(mHandle_);
  }

  memory::memory(const memory &m) :
    mHandle(NULL) {
    setMHandle(m.mHandle);
  }

  memory& memory::operator = (const memory &m) {
    setMHandle(m.mHandle);
    return *this;
  }

  memory::~memory() {
    removeMHandleRef();
  }

  void memory::setMHandle(memory_v *mHandle_) {
    if (mHandle != mHandle_) {
      removeMHandleRef();
      mHandle = mHandle_;
      mHandle->addRef();
    }
  }

  void memory::setDHandle(device_v *dHandle) {
    mHandle->dHandle = dHandle;
    // If this is the very first reference, update the device references
    if (mHandle->getRefs() == 1) {
      mHandle->dHandle->addRef();
    }
  }

  void memory::removeMHandleRef() {
    if (mHandle && !mHandle->removeRef()) {
      device_v *dHandle = mHandle->dHandle;
      free();
      device::removeDHandleRefFrom(dHandle);
      delete mHandle;
      mHandle = NULL;
    }
  }

  void memory::dontUseRefs() {
    if (mHandle) {
      mHandle->dontUseRefs();
    }
  }

  bool memory::isInitialized() const {
    return (mHandle != NULL);
  }

  memory& memory::swap(memory &m) {
    memory_v *mHandle_ = mHandle;
    mHandle   = m.mHandle;
    m.mHandle = mHandle_;
    return *this;
  }

  void* memory::ptr() {
    return (mHandle ? mHandle->ptr : NULL);
  }

  const void* memory::ptr() const {
    return (mHandle ? mHandle->ptr : NULL);
  }

  memory_v* memory::getMHandle() const {
    return mHandle;
  }

  device_v* memory::getDHandle() const {
    return mHandle->dHandle;
  }

  occa::device memory::getDevice() const {
    return occa::device(mHandle
                        ? mHandle->dHandle
                        : NULL);
  }

  memory::operator kernelArg() const {
    if (!mHandle) {
      return kernelArg((void*) NULL);
    }
    return mHandle->makeKernelArg();
  }

  const std::string& memory::mode() const {
    OCCA_ERROR("Memory not initialized",
               mHandle != NULL);
    return mHandle->dHandle->mode;
  }

  const occa::properties& memory::properties() const {
    OCCA_ERROR("Memory not initialized",
               mHandle != NULL);
    return mHandle->properties;
  }

  udim_t memory::size() const {
    if (mHandle == NULL) {
      return 0;
    }
    return mHandle->size;
  }

  bool memory::isManaged() const {
    return (mHandle && mHandle->isManaged());
  }

  bool memory::inDevice() const {
    return (mHandle && mHandle->inDevice());
  }

  bool memory::isStale() const {
    return (mHandle && mHandle->isStale());
  }

  void memory::setupUva() {
    if (!mHandle) {
      return;
    }
    if ( !(mHandle->dHandle->hasSeparateMemorySpace()) ) {
      mHandle->uvaPtr = mHandle->ptr;
    } else {
      mHandle->uvaPtr = (char*) sys::malloc(mHandle->size);
    }

    ptrRange range;
    range.start = mHandle->uvaPtr;
    range.end   = (range.start + mHandle->size);

    uvaMap[range]                   = mHandle;
    mHandle->dHandle->uvaMap[range] = mHandle;

    // Needed for kernelArg.void_ -> mHandle checks
    if (mHandle->uvaPtr != mHandle->ptr) {
      uvaMap[mHandle->ptr] = mHandle;
    }
  }

  void memory::startManaging() {
    if (!mHandle) {
      return;
    }
    mHandle->memInfo |= uvaFlag::isManaged;
  }

  void memory::stopManaging() {
    if (mHandle) {
      mHandle->memInfo &= ~uvaFlag::isManaged;
    }
  }

  void memory::syncToDevice(const dim_t bytes,
                            const dim_t offset) {
    OCCA_ERROR("Memory not initialized",
               mHandle != NULL);

    udim_t bytes_ = ((bytes == -1) ? mHandle->size : bytes);

    OCCA_ERROR("Trying to copy negative bytes (" << bytes << ")",
               bytes >= -1);
    OCCA_ERROR("Cannot have a negative offset (" << offset << ")",
               offset >= 0);

    if (bytes_ == 0) {
      return;
    }

    OCCA_ERROR("Memory has size [" << mHandle->size << "],"
               << " trying to access [ " << offset << " , " << (offset + bytes_) << " ]",
               (bytes_ + offset) <= mHandle->size);

    if (!mHandle->dHandle->hasSeparateMemorySpace()) {
      return;
    }

    copyFrom(mHandle->uvaPtr, bytes_, offset);

    mHandle->memInfo |=  uvaFlag::inDevice;
    mHandle->memInfo &= ~uvaFlag::isStale;

    removeFromStaleMap(mHandle);
  }

  void memory::syncToHost(const dim_t bytes,
                          const dim_t offset) {
    OCCA_ERROR("Memory not initialized",
               mHandle != NULL);

    udim_t bytes_ = ((bytes == -1) ? mHandle->size : bytes);

    OCCA_ERROR("Trying to copy negative bytes (" << bytes << ")",
               bytes >= -1);
    OCCA_ERROR("Cannot have a negative offset (" << offset << ")",
               offset >= 0);

    if (bytes_ == 0) {
      return;
    }

    OCCA_ERROR("Memory has size [" << mHandle->size << "],"
               << " trying to access [ " << offset << " , " << (offset + bytes_) << " ]",
               (bytes_ + offset) <= mHandle->size);

    if (!mHandle->dHandle->hasSeparateMemorySpace()) {
      return;
    }

    copyTo(mHandle->uvaPtr, bytes_, offset);

    mHandle->memInfo &= ~uvaFlag::inDevice;
    mHandle->memInfo &= ~uvaFlag::isStale;

    removeFromStaleMap(mHandle);
  }

  bool memory::uvaIsStale() const {
    return (mHandle && mHandle->isStale());
  }

  void memory::uvaMarkStale() {
    if (mHandle != NULL) {
      mHandle->memInfo |= uvaFlag::isStale;
    }
  }

  void memory::uvaMarkFresh() {
    if (mHandle != NULL) {
      mHandle->memInfo &= ~uvaFlag::isStale;
    }
  }

  bool memory::operator == (const occa::memory &m) {
    return (mHandle == m.mHandle);
  }

  bool memory::operator != (const occa::memory &m) {
    return (mHandle != m.mHandle);
  }

  occa::memory memory::operator + (const dim_t offset) const {
    return slice(offset);
  }

  occa::memory& memory::operator += (const dim_t offset) {
    *this = slice(offset);
    return *this;
  }

  occa::memory memory::slice(const dim_t offset,
                             const dim_t bytes) const {
    OCCA_ERROR("Memory not initialized",
               mHandle != NULL);

    udim_t bytes_ = ((bytes == -1)
                     ? (mHandle->size - offset)
                     : bytes);

    OCCA_ERROR("Trying to allocate negative bytes (" << bytes << ")",
               bytes >= -1);
    OCCA_ERROR("Cannot have a negative offset (" << offset << ")",
               offset >= 0);
    OCCA_ERROR("Cannot have offset and bytes greater than the memory size ("
               << offset << " + " << bytes_ << " > " << size() << ")",
               (offset + (dim_t) bytes_) <= (dim_t) size());

    bool needsFree;
    occa::memory m(mHandle->addOffset(offset, needsFree));
    memory_v &mv = *(m.mHandle);
    mv.dHandle = mHandle->dHandle;
    mv.size = bytes_;
    if (mHandle->uvaPtr) {
      mv.uvaPtr = (mHandle->uvaPtr + offset);
    }
    if (!needsFree) {
      m.dontUseRefs();
    }
    return m;
  }

  void memory::copyFrom(const void *src,
                        const dim_t bytes,
                        const dim_t offset,
                        const occa::properties &props) {
    OCCA_ERROR("Memory not initialized",
               mHandle != NULL);

    udim_t bytes_ = ((bytes == -1) ? mHandle->size : bytes);

    OCCA_ERROR("Trying to allocate negative bytes (" << bytes << ")",
               bytes >= -1);
    OCCA_ERROR("Cannot have a negative offset (" << offset << ")",
               offset >= 0);
    OCCA_ERROR("Destination memory has size [" << mHandle->size << "],"
               << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]",
               (bytes_ + offset) <= mHandle->size);

    mHandle->copyFrom(src, bytes_, offset, props);
  }

  void memory::copyFrom(const memory src,
                        const dim_t bytes,
                        const dim_t destOffset,
                        const dim_t srcOffset,
                        const occa::properties &props) {
    OCCA_ERROR("Memory not initialized",
               mHandle && src.mHandle);

    udim_t bytes_ = ((bytes == -1) ? mHandle->size : bytes);

    OCCA_ERROR("Trying to allocate negative bytes (" << bytes << ")",
               bytes >= -1);
    OCCA_ERROR("Cannot have a negative offset (" << destOffset << ")",
               destOffset >= 0);
    OCCA_ERROR("Cannot have a negative offset (" << srcOffset << ")",
               srcOffset >= 0);
    OCCA_ERROR("Source memory has size [" << src.mHandle->size << "],"
               << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]",
               (bytes_ + srcOffset) <= src.mHandle->size);
    OCCA_ERROR("Destination memory has size [" << mHandle->size << "],"
               << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]",
               (bytes_ + destOffset) <= mHandle->size);

    mHandle->copyFrom(src.mHandle, bytes_, destOffset, srcOffset, props);
  }

  void memory::copyTo(void *dest,
                      const dim_t bytes,
                      const dim_t offset,
                      const occa::properties &props) const {
    OCCA_ERROR("Memory not initialized",
               mHandle != NULL);

    udim_t bytes_ = ((bytes == -1) ? mHandle->size : bytes);

    OCCA_ERROR("Trying to allocate negative bytes (" << bytes << ")",
               bytes >= -1);
    OCCA_ERROR("Cannot have a negative offset (" << offset << ")",
               offset >= 0);
    OCCA_ERROR("Source memory has size [" << mHandle->size << "],"
               << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]",
               (bytes_ + offset) <= mHandle->size);

    mHandle->copyTo(dest, bytes_, offset, props);
  }

  void memory::copyTo(memory dest,
                      const dim_t bytes,
                      const dim_t destOffset,
                      const dim_t srcOffset,
                      const occa::properties &props) const {
    OCCA_ERROR("Memory not initialized",
               mHandle && dest.mHandle);

    udim_t bytes_ = ((bytes == -1) ? mHandle->size : bytes);

    OCCA_ERROR("Trying to allocate negative bytes (" << bytes << ")",
               bytes >= -1);
    OCCA_ERROR("Cannot have a negative offset (" << destOffset << ")",
               destOffset >= 0);
    OCCA_ERROR("Cannot have a negative offset (" << srcOffset << ")",
               srcOffset >= 0);
    OCCA_ERROR("Source memory has size [" << mHandle->size << "],"
               << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]",
               (bytes_ + srcOffset) <= mHandle->size);
    OCCA_ERROR("Destination memory has size [" << dest.mHandle->size << "],"
               << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]",
               (bytes_ + destOffset) <= dest.mHandle->size);

    dest.mHandle->copyFrom(mHandle, bytes_, destOffset, srcOffset, props);
  }

  void memory::copyFrom(const void *src,
                        const occa::properties &props) {
    copyFrom(src, -1, 0, props);
  }

  void memory::copyFrom(const memory src,
                        const occa::properties &props) {
    copyFrom(src, -1, 0, 0, props);
  }

  void memory::copyTo(void *dest,
                      const occa::properties &props) const {
    copyTo(dest, -1, 0, props);
  }

  void memory::copyTo(const memory dest,
                      const occa::properties &props) const {
    copyTo(dest, -1, 0, 0, props);
  }

  occa::memory memory::clone() const {
    if (mHandle) {
      return occa::device(mHandle->dHandle).malloc(size(),
                                                   *this,
                                                   properties());
    }
    return occa::memory();
  }

  void memory::free() {
    deleteRefs(true);
  }

  void memory::detach() {
    deleteRefs(false);
  }

  void memory::deleteRefs(const bool freeMemory) {
    if (!mHandle) {
      return;
    }
    mHandle->dHandle->bytesAllocated -= (mHandle->size);

    if (mHandle->uvaPtr) {
      uvaMap.erase(mHandle->uvaPtr);
      mHandle->dHandle->uvaMap.erase(mHandle->uvaPtr);

      // CPU case where memory is shared
      if (mHandle->uvaPtr != mHandle->ptr) {
        uvaMap.erase(mHandle->ptr);
        mHandle->dHandle->uvaMap.erase(mHandle->uvaPtr);

        ::free(mHandle->uvaPtr);
        mHandle->uvaPtr = NULL;
      }
    }

    if (freeMemory) {
      mHandle->free();
    } else {
      mHandle->detach();
    }
  }

  namespace cpu {
    occa::memory wrapMemory(void *ptr, const udim_t bytes) {
      serial::memory &mem = *(new serial::memory);
      mem.dontUseRefs();

      mem.dHandle = host().getDHandle();
      mem.size    = bytes;
      mem.ptr     = (char*) ptr;

      return occa::memory(&mem);
    }
  }
}
