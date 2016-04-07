#ifndef OCCA_SERIAL_DEVICE_HEADER
#define OCCA_SERIAL_DEVICE_HEADER

#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

#include "occa/base.hpp"
#include "occa/sys.hpp"
#include "occa/library.hpp"

namespace occa {
  namespace serial {
    //---[ Data Structs ]---------------
    struct SerialKernelData_t {
      void *dlHandle;
      handleFunction_t handle;

      void *vArgs[2*OCCA_MAX_ARGS];
    };

    struct SerialDeviceData_t {
      int vendor;
    };
    //==================================

    class device : public occa::device_v {
      device();
      device(const device &k);
      device& operator = (const device &k);
      void free();

      void* getContextHandle();

      void setup(argInfoMap &aim);

      void addOccaHeadersToInfo(kernelInfo &info_);

      std::string getInfoSalt(const kernelInfo &info_);

      deviceIdentifier getIdentifier() const;

      void getEnvironmentVariables();

      void appendAvailableDevices(std::vector<device> &dList);

      int simdWidth();

      void flush();
      void finish();

      //  |---[ Stream ]----------------
      stream createStream();
      void freeStream(stream s);

      streamTag tagStream();
      void waitFor(streamTag tag);
      double timeBetween(const streamTag &startTag, const streamTag &endTag);

      stream wrapStream(void *handle_);
      //  |=============================

      //  |---[ Kernel ]----------------
      std::string fixBinaryName(const std::string &filename);

      kernel_v* buildKernelFromSource(const std::string &filename,
                                      const std::string &functionName,
                                      const kernelInfo &info_);

      kernel_v* buildKernelFromBinary(const std::string &filename,
                                      const std::string &functionName);
      //  |=============================

      //  |---[ Kernel ]----------------
      memory_v* wrapMemory(void *handle_,
                           const uintptr bytes);

      memory_v* wrapTexture(void *handle_,
                            const int dim, const occa::dim &dims,
                            occa::formatType type, const int permissions);

      memory_v* malloc(const uintptr bytes,
                       void *src);

      memory_v* textureAlloc(const int dim, const occa::dim &dims,
                             void *src,
                             occa::formatType type, const int permissions);

      memory_v* mappedAlloc(const uintptr bytes,
                            void *src);

      uintptr memorySize();
      //  |=============================
    }
  }
}

#endif