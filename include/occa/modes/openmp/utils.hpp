#if OCCA_OPENMP_ENABLED
#  ifndef OCCA_OPENMP_UTILS_HEADER
#  define OCCA_OPENMP_UTILS_HEADER

namespace occa {
  namespace omp {
    extern std::string notSupported;

    std::string baseCompilerFlag(const int vendor_);
    std::string compilerFlag(const int vendor_,
                             const std::string &compiler);
  }
}

#  endif
#endif