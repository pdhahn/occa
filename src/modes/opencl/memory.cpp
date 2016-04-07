#if OCCA_OPENCL_ENABLED

#include "occa/OpenCL.hpp"

namespace occa {
  namespace opencl {
    template <>
    memory_t<OpenCL>::memory_t(){
      strMode = "OpenCL";

      memInfo = memFlag::none;

      handle    = NULL;
      mappedPtr = NULL;
      uvaPtr    = NULL;

      dHandle = NULL;
      size = 0;

      textureInfo.dim = 1;
      textureInfo.w = textureInfo.h = textureInfo.d = 0;
    }

    template <>
    memory_t<OpenCL>::memory_t(const memory_t<OpenCL> &m){
      *this = m;
    }

    template <>
    memory_t<OpenCL>& memory_t<OpenCL>::operator = (const memory_t<OpenCL> &m){
      memInfo = m.memInfo;

      handle    = m.handle;
      mappedPtr = m.mappedPtr;
      uvaPtr    = m.uvaPtr;

      dHandle = m.dHandle;
      size    = m.size;

      textureInfo.dim = m.textureInfo.dim;

      textureInfo.w = m.textureInfo.w;
      textureInfo.h = m.textureInfo.h;
      textureInfo.d = m.textureInfo.d;

      return *this;
    }

    template <>
    memory_t<OpenCL>::~memory_t(){}

    template <>
    void* memory_t<OpenCL>::getMemoryHandle(){
      return handle;
    }

    template <>
    void* memory_t<OpenCL>::getTextureHandle(){
      return textureInfo.arg;
    }

    template <>
    void memory_t<OpenCL>::copyFrom(const void *src,
                                    const uintptr_t bytes,
                                    const uintptr_t offset){
      cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Copy From",
                      clEnqueueWriteBuffer(stream, *((cl_mem*) handle),
                                           CL_TRUE,
                                           offset, bytes_, src,
                                           0, NULL, NULL));
      else{
        const int bie = textureInfo.bytesInEntry;

        size_t offset_[3] = {      (offset / bie)      % textureInfo.w , 0, 0};
        size_t pixels_[3] = {1 + (((bytes_ / bie) - 1) % textureInfo.w), 1, 1};

        if(textureInfo.dim == 2){
          offset_[1] = (offset / bie) / textureInfo.w;
          pixels_[1] = (bytes_ / bie) / textureInfo.w;
        }

        OCCA_CL_CHECK("Texture Memory: Copy From",
                      clEnqueueWriteImage(stream, *((cl_mem*) handle),
                                          CL_TRUE,
                                          offset_, pixels_,
                                          0, 0,
                                          src,
                                          0, NULL, NULL));
      }
    }

    template <>
    void memory_t<OpenCL>::copyFrom(const memory_v *src,
                                    const uintptr_t bytes,
                                    const uintptr_t destOffset,
                                    const uintptr_t srcOffset){
      cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + destOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + srcOffset) <= src->size,
                 "Source has size [" << src->size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Copy From",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) src->handle),
                                          *((cl_mem*) handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
      else
        OCCA_CL_CHECK("Texture Memory: Copy From",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) src->handle),
                                          *((cl_mem*) handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
    }

    template <>
    void memory_t<OpenCL>::copyTo(void *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t offset){
      const cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Copy To",
                      clEnqueueReadBuffer(stream, *((cl_mem*) handle),
                                          CL_TRUE,
                                          offset, bytes_, dest,
                                          0, NULL, NULL));
      else{
        const int bie = textureInfo.bytesInEntry;

        size_t offset_[3] = {      (offset / bie)      % textureInfo.w , 0, 0};
        size_t pixels_[3] = {1 + (((bytes_ / bie) - 1) % textureInfo.w), 1, 1};

        if(textureInfo.dim == 2){
          offset_[1] = (offset / bie) / textureInfo.w;
          pixels_[1] = (bytes_ / bie) / textureInfo.w;
        }

        OCCA_CL_CHECK("Texture Memory: Copy From",
                      clEnqueueReadImage(stream, *((cl_mem*) handle),
                                         CL_TRUE,
                                         offset_, pixels_,
                                         0, 0,
                                         dest,
                                         0, NULL, NULL));
      }
    }

    template <>
    void memory_t<OpenCL>::copyTo(memory_v *dest,
                                  const uintptr_t bytes,
                                  const uintptr_t destOffset,
                                  const uintptr_t srcOffset){
      const cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + srcOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + destOffset) <= dest->size,
                 "Destination has size [" << dest->size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Copy To",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) handle),
                                          *((cl_mem*) dest->handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
      else
        OCCA_CL_CHECK("Texture Memory: Copy To",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) handle),
                                          *((cl_mem*) dest->handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
    }

    template <>
    void memory_t<OpenCL>::asyncCopyFrom(const void *src,
                                         const uintptr_t bytes,
                                         const uintptr_t offset){
      const cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Asynchronous Copy From",
                      clEnqueueWriteBuffer(stream, *((cl_mem*) handle),
                                           CL_FALSE,
                                           offset, bytes_, src,
                                           0, NULL, NULL));
      else
        OCCA_CL_CHECK("Texture Memory: Asynchronous Copy From",
                      clEnqueueWriteBuffer(stream, *((cl_mem*) handle),
                                           CL_FALSE,
                                           offset, bytes_, src,
                                           0, NULL, NULL));
    }

    template <>
    void memory_t<OpenCL>::asyncCopyFrom(const memory_v *src,
                                         const uintptr_t bytes,
                                         const uintptr_t destOffset,
                                         const uintptr_t srcOffset){
      const cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + destOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + srcOffset) <= src->size,
                 "Source has size [" << src->size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Asynchronous Copy From",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) src->handle),
                                          *((cl_mem*) handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
      else
        OCCA_CL_CHECK("Texture Memory: Asynchronous Copy From",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) src->handle),
                                          *((cl_mem*) handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
    }

    template <>
    void memory_t<OpenCL>::asyncCopyTo(void *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t offset){
      const cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + offset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << offset << " , " << (offset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Asynchronous Copy To",
                      clEnqueueReadBuffer(stream, *((cl_mem*) handle),
                                          CL_FALSE,
                                          offset, bytes_, dest,
                                          0, NULL, NULL));
      else
        OCCA_CL_CHECK("Texture Memory: Asynchronous Copy To",
                      clEnqueueReadBuffer(stream, *((cl_mem*) handle),
                                          CL_FALSE,
                                          offset, bytes_, dest,
                                          0, NULL, NULL));
    }

    template <>
    void memory_t<OpenCL>::asyncCopyTo(memory_v *dest,
                                       const uintptr_t bytes,
                                       const uintptr_t destOffset,
                                       const uintptr_t srcOffset){
      const cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);

      const uintptr_t bytes_ = (bytes == 0) ? size : bytes;

      OCCA_CHECK((bytes_ + srcOffset) <= size,
                 "Memory has size [" << size << "],"
                 << "trying to access [ " << srcOffset << " , " << (srcOffset + bytes_) << " ]");

      OCCA_CHECK((bytes_ + destOffset) <= dest->size,
                 "Destination has size [" << dest->size << "],"
                 << "trying to access [ " << destOffset << " , " << (destOffset + bytes_) << " ]");

      if(!isATexture())
        OCCA_CL_CHECK("Memory: Asynchronous Copy To",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) handle),
                                          *((cl_mem*) dest->handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
      else
        OCCA_CL_CHECK("Texture Memory: Asynchronous Copy To",
                      clEnqueueCopyBuffer(stream,
                                          *((cl_mem*) handle),
                                          *((cl_mem*) dest->handle),
                                          srcOffset, destOffset,
                                          bytes_,
                                          0, NULL, NULL));
    }

    template <>
    void memory_t<OpenCL>::mappedFree(){
      cl_command_queue &stream = *((cl_command_queue*) dHandle->currentStream);
      cl_int error;

      // Un-map pointer
      error = clEnqueueUnmapMemObject(stream,
                                      *((cl_mem*) handle),
                                      mappedPtr,
                                      0, NULL, NULL);

      OCCA_CL_CHECK("Mapped Free: clEnqueueUnmapMemObject", error);

      // Free mapped-host pointer
      error = clReleaseMemObject(*((cl_mem*) handle));

      OCCA_CL_CHECK("Mapped Free: clReleaseMemObject", error);

      delete (cl_mem*) handle;
    }

    template <>
    void memory_t<OpenCL>::free(){
      clReleaseMemObject(*((cl_mem*) handle));

      if(!isAWrapper())
        delete (cl_mem*) handle;

      if(isATexture()){
        clReleaseSampler( *((cl_sampler*) textureInfo.arg) );

        if(!isAWrapper())
          delete (cl_sampler*) textureInfo.arg;
      }

      size = 0;
    }
  }
}

#endif
