#if OCCA_OPENCL_ENABLED

#include "occa/OpenCL.hpp"

namespace occa {
  namespace opencl {
    template <>
    kernel_t<OpenCL>::kernel_t(){
      strMode = "OpenCL";

      data    = NULL;
      dHandle = NULL;

      dims  = 1;
      inner = occa::dim(1,1,1);
      outer = occa::dim(1,1,1);

      maximumInnerDimSize_ = 0;
      preferredDimSize_    = 0;
    }

    template <>
    kernel_t<OpenCL>::kernel_t(const kernel_t<OpenCL> &k){
      *this = k;
    }

    template <>
    kernel_t<OpenCL>& kernel_t<OpenCL>::operator = (const kernel_t<OpenCL> &k){
      data    = k.data;
      dHandle = k.dHandle;

      metaInfo = k.metaInfo;

      dims  = k.dims;
      inner = k.inner;
      outer = k.outer;

      nestedKernels = k.nestedKernels;

      return *this;
    }

    template <>
    kernel_t<OpenCL>::~kernel_t(){}

    template <>
    void* kernel_t<OpenCL>::getKernelHandle(){
      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      return data_.kernel;
    }

    template <>
    void* kernel_t<OpenCL>::getProgramHandle(){
      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      return data_.program;
    }

    template <>
    std::string kernel_t<OpenCL>::fixBinaryName(const std::string &filename){
      return filename;
    }

    template <>
    kernel_t<OpenCL>* kernel_t<OpenCL>::buildFromSource(const std::string &filename,
                                                        const std::string &functionName,
                                                        const kernelInfo &info_){

      name = functionName;

      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      kernelInfo info = info_;

      dHandle->addOccaHeadersToInfo(info);

      const std::string hash = getFileContentHash(filename,
                                                  dHandle->getInfoSalt(info));

      const std::string hashDir    = hashDirFor(filename, hash);
      const std::string sourceFile = hashDir + kc::sourceFile;
      const std::string binaryFile = hashDir + fixBinaryName(kc::binaryFile);
      bool foundBinary = true;

      if (!haveHash(hash, 0))
        waitForHash(hash, 0);
      else if (sys::fileExists(binaryFile))
        releaseHash(hash, 0);
      else
        foundBinary = false;

      if (foundBinary) {
        if(verboseCompilation_f)
          std::cout << "Found cached binary of [" << compressFilename(filename) << "] in [" << compressFilename(binaryFile) << "]\n";

        return buildFromBinary(binaryFile, functionName);
      }

      createSourceFileFrom(filename, hashDir, info);

      std::string cFunction = readFile(sourceFile);

      std::string catFlags = info.flags + dHandle->compilerFlags;

      cl::buildKernelFromSource(data_,
                                cFunction.c_str(), cFunction.size(),
                                functionName,
                                catFlags,
                                hash, sourceFile);

      cl::saveProgramBinary(data_, binaryFile, hash);

      releaseHash(hash, 0);

      return this;
    }

    template <>
    kernel_t<OpenCL>* kernel_t<OpenCL>::buildFromBinary(const std::string &filename,
                                                        const std::string &functionName){

      name = functionName;

      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      std::string cFile = readFile(filename);

      cl::buildKernelFromBinary(data_,
                                (const unsigned char*) cFile.c_str(),
                                cFile.size(),
                                functionName,
                                dHandle->compilerFlags);

      return this;
    }

    template <>
    kernel_t<OpenCL>* kernel_t<OpenCL>::loadFromLibrary(const char *cache,
                                                        const std::string &functionName){
      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      cl::buildKernelFromSource(data_,
                                cache, strlen(cache),
                                functionName);

      return this;
    }

    template <>
    uintptr_t kernel_t<OpenCL>::maximumInnerDimSize(){
      if(maximumInnerDimSize_)
        return maximumInnerDimSize_;

      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      size_t pds;

      OCCA_CL_CHECK("Kernel: Getting Preferred Dim Size",
                    clGetKernelWorkGroupInfo(data_.kernel,
                                             data_.deviceID,
                                             CL_KERNEL_WORK_GROUP_SIZE,
                                             sizeof(size_t), &pds, NULL));

      maximumInnerDimSize_ = (uintptr_t) pds;

      return maximumInnerDimSize_;
    }

    template <>
    int kernel_t<OpenCL>::preferredDimSize(){
      if(preferredDimSize_)
        return preferredDimSize_;

      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      size_t pds;

      OCCA_CL_CHECK("Kernel: Getting Preferred Dim Size",
                    clGetKernelWorkGroupInfo(data_.kernel,
                                             data_.deviceID,
                                             CL_KERNEL_PREFERRED_WORK_GROUP_SIZE_MULTIPLE,
                                             sizeof(size_t), &pds, NULL));

      preferredDimSize_ = (uintptr_t) pds;

      return preferredDimSize_;
    }

    template <>
    void kernel_t<OpenCL>::runFromArguments(const int kArgc, const kernelArg *kArgs){
      OpenCLKernelData_t &data_ = *((OpenCLKernelData_t*) data);
      cl_kernel kernel_ = data_.kernel;

      occa::dim fullOuter = outer*inner;

      int argc = 0;
      OCCA_CL_CHECK("Kernel (" + metaInfo.name + ") : Setting Kernel Argument [0]",
                    clSetKernelArg(kernel_, argc++, sizeof(void*), NULL));

      for(int i = 0; i < kArgc; ++i){
        for(int j = 0; j < kArgs[i].argc; ++j){
          OCCA_CL_CHECK("Kernel (" + metaInfo.name + ") : Setting Kernel Argument [" << (i + 1) << "]",
                        clSetKernelArg(kernel_, argc++, kArgs[i].args[j].size, kArgs[i].args[j].ptr()));
        }
      }

      OCCA_CL_CHECK("Kernel (" + metaInfo.name + ") : Kernel Run",
                    clEnqueueNDRangeKernel(*((cl_command_queue*) dHandle->currentStream),
                                           kernel_,
                                           (cl_int) dims,
                                           NULL,
                                           (uintptr_t*) &fullOuter,
                                           (uintptr_t*) &inner,
                                           0, NULL, NULL));
    }

    template <>
    void kernel_t<OpenCL>::free(){
      OCCA_EXTRACT_DATA(OpenCL, Kernel);

      OCCA_CL_CHECK("Kernel: Free",
                    clReleaseKernel(data_.kernel));

      delete (OpenCLKernelData_t*) this->data;
    }
  }
}

#endif
