#if OCCA_CUDA_ENABLED
#  ifndef OCCA_CUDA_UTILS_HEADER
#  define OCCA_CUDA_UTILS_HEADER

namespace occa {
  namespace cuda {
    extern bool isInitialized;

    void init();

    int getDeviceCount();

    CUdevice getDevice(const int id);

    uintptr_t getDeviceMemorySize(CUdevice device);

    std::string getDeviceListInfo();

    void enablePeerToPeer(CUcontext context);

    void checkPeerToPeer(CUdevice destDevice,
                         CUdevice srcDevice);

    void peerToPeerMemcpy(CUdevice destDevice,
                          CUcontext destContext,
                          CUdeviceptr destMemory,
                          CUdevice srcDevice,
                          CUcontext srcContext,
                          CUdeviceptr srcMemory,
                          const uintptr_t bytes,
                          CUstream usingStream);


    void asyncPeerToPeerMemcpy(CUdevice destDevice,
                               CUcontext destContext,
                               CUdeviceptr destMemory,
                               CUdevice srcDevice,
                               CUcontext srcContext,
                               CUdeviceptr srcMemory,
                               const uintptr_t bytes,
                               CUstream usingStream);

    void peerToPeerMemcpy(CUdevice destDevice,
                          CUcontext destContext,
                          CUdeviceptr destMemory,
                          CUdevice srcDevice,
                          CUcontext srcContext,
                          CUdeviceptr srcMemory,
                          const uintptr_t bytes,
                          CUstream usingStream,
                          const bool isAsync);

    occa::device wrapDevice(CUdevice device, CUcontext context);

    CUevent& event(streamTag tag);

    std::string error(const CUresult errorCode);
  }

  extern const CUarray_format cudaFormats[8];

  template <>
  void* formatType::format<occa::CUDA>() const;

  extern const int CUDA_ADDRESS_NONE;
  extern const int CUDA_ADDRESS_CLAMP;
}

#  endif
#endif
