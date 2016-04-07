#if OCCA_OPENCL_ENABLED
#  ifndef OCCA_OPENCL_UTILS_HEADER
#  define OCCA_OPENCL_UTILS_HEADER

namespace occa {
  namespace opencl {
    namespace info {
      static const int CPU     = (1 << 0);
      static const int GPU     = (1 << 1);
      static const int FPGA    = (1 << 3);
      static const int XeonPhi = (1 << 2);
      static const int anyType = (CPU | GPU | FPGA | XeonPhi);

      static const int Intel     = (1 << 4);
      static const int AMD       = (1 << 5);
      static const int Altera    = (1 << 6);
      static const int NVIDIA    = (1 << 7);
      static const int anyVendor = (Intel | AMD | Altera | NVIDIA);

      static const int any = (anyType | anyVendor);

      std::string deviceType(int type);
      std::string vendor(int type);
    }

    cl_device_type deviceType(int type);

    int getPlatformCount();

    cl_platform_id platformID(int pID);

    int getDeviceCount(int type = cl::info::any);
    int getDeviceCountInPlatform(int pID, int type = cl::info::any);

    cl_device_id deviceID(int pID, int dID, int type = cl::info::any);

    std::string deviceStrInfo(cl_device_id clDID,
                              cl_device_info clInfo);

    std::string deviceName(int pID, int dID);

    int deviceType(int pID, int dID);

    int deviceVendor(int pID, int dID);

    int deviceCoreCount(int pID, int dID);

    uintptr_t getDeviceMemorySize(cl_device_id dID);
    uintptr_t getDeviceMemorySize(int pID, int dID);

    std::string getDeviceListInfo();

    void buildKernelFromSource(OpenCLKernelData_t &data_,
                               const char *content,
                               const size_t contentBytes,
                               const std::string &functionName,
                               const std::string &flags = "",
                               const std::string &hash = "",
                               const std::string &sourceFile = "");

    void buildKernelFromBinary(OpenCLKernelData_t &data_,
                               const unsigned char *content,
                               const size_t contentBytes,
                               const std::string &functionName,
                               const std::string &flags = "");

    void saveProgramBinary(OpenCLKernelData_t &data_,
                           const std::string &binaryFile,
                           const std::string &hash = "");

    occa::device wrapDevice(cl_platform_id platformID,
                            cl_device_id deviceID,
                            cl_context context);

    cl_event& event(streamTag tag);

    bool imageFormatIsSupported(cl_image_format &f,
                                cl_image_format *fs,
                                const int formatCount);

    void printImageFormat(cl_image_format &imageFormat);

    std::string error(int e);
  }

  extern const cl_channel_type clFormats[8];

  template <>
  void* formatType::format<occa::OpenCL>() const;
}

#  endif
#endif