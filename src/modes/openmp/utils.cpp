#if OCCA_OPENMP_ENABLED


namespace occa {
  namespace openmp {
    std::string notSupported = "N/A";

    std::string baseCompilerFlag(const int vendor_){
      if(vendor_ & (sys::vendor::GNU |
                    sys::vendor::LLVM)){

        return "-fopenmp";
      }
      else if(vendor_ & (sys::vendor::Intel |
                         sys::vendor::Pathscale)){

        return "-openmp";
      }
      else if(vendor_ & sys::vendor::IBM){
        return "-qsmp";
      }
      else if(vendor_ & sys::vendor::PGI){
        return "-mp";
      }
      else if(vendor_ & sys::vendor::HP){
        return "+Oopenmp";
      }
      else if(vendor_ & sys::vendor::VisualStudio){
        return "/openmp";
      }
      else if(vendor_ & sys::vendor::Cray){
        return "";
      }

      return omp::notSupported;
    }

    std::string compilerFlag(const int vendor_,
                             const std::string &compiler){

#if (OCCA_OS & (LINUX_OS | OSX_OS))
      std::stringstream ss;
      std::string flag = omp::notSupported;

      const std::string safeCompiler = removeSlashes(compiler);
      const std::string &hash = safeCompiler;

      const std::string testFilename   = sys::getFilename("[occa]/testing/ompTest.cpp");
      const std::string binaryFilename = sys::getFilename("[occa]/testing/omp_" + safeCompiler);
      const std::string infoFilename   = sys::getFilename("[occa]/testing/ompInfo_" + safeCompiler);

      cacheFile(testFilename,
                readFile(env::OCCA_DIR + "/scripts/ompTest.cpp"),
                "ompTest");

      if(!haveHash(hash)){
        waitForHash(hash);
      } else {
        if(!sys::fileExists(infoFilename)){
          flag = baseCompilerFlag(vendor_);
          ss << compiler
             << ' '
             << flag
             << ' '
             << testFilename
             << " -o "
             << binaryFilename
             << " > /dev/null 2>&1";

          const int compileError = system(ss.str().c_str());

          if(compileError)
            flag = omp::notSupported;

          writeToFile(infoFilename, flag);
          releaseHash(hash);

          return flag;
        }
        releaseHash(hash);
      }

      ss << readFile(infoFilename);
      ss >> flag;

      return flag;
#elif (OCCA_OS == WINDOWS_OS)
      return "/openmp"; // VS Compilers support OpenMP
#endif
    }
  }
}

#endif
