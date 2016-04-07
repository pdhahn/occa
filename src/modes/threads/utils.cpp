namespace occa {
  namespace threads {
    void* limbo(void *args){
      PthreadWorkerData_t &data = *((PthreadWorkerData_t*) args);

      // Thread affinity
#if (OCCA_OS == LINUX_OS) // Not WINUX
      cpu_set_t cpuHandle;
      CPU_ZERO(&cpuHandle);
      CPU_SET(data.pinnedCore, &cpuHandle);
#else
      // NBN: affinity on hyperthreaded multi-socket systems?
      if(data.rank == 0)
        fprintf(stderr, "[Pthreads] Affinity not guaranteed in this OS\n");
      // BOOL SetProcessAffinityMask(HANDLE hProcess,DWORD_PTR dwProcessAffinityMask);
#endif

      while(true){
        // Fence local data (incase of out-of-socket updates)
        OCCA_LFENCE;

        if( *(data.pendingJobs) ){
          data.kernelMutex->lock();
          PthreadKernelInfo_t &pkInfo = *(data.pKernelInfo->front());
          data.pKernelInfo->pop();
          data.kernelMutex->unlock();

          run(pkInfo);

          //---[ Barrier ]----------------
          data.pendingJobsMutex->lock();
          --( *(data.pendingJobs) );
          data.pendingJobsMutex->unlock();

          while((*data.pendingJobs) % data.count){
            OCCA_LFENCE;
          }
          //==============================
        }
      }

      return NULL;
    }

    void run(PthreadKernelInfo_t &pkInfo){
      handleFunction_t tmpKernel = (handleFunction_t) pkInfo.kernelHandle;

      int dp           = pkInfo.dims - 1;
      occa::dim &outer = pkInfo.outer;
      occa::dim &inner = pkInfo.inner;

      occa::dim start(0,0,0), end(outer);

      int loops     = (outer[dp] / pkInfo.count);
      int coolRanks = (outer[dp] - loops*pkInfo.count);

      if(pkInfo.rank < coolRanks){
        start[dp] = (pkInfo.rank)*(loops + 1);
        end[dp]   = start[dp] + (loops + 1);
      }
      else{
        start[dp] = pkInfo.rank*loops + coolRanks;
        end[dp]   = start[dp] + loops;
      }

      int occaKernelArgs[12];

      occaKernelArgs[0]  = outer.z; occaKernelArgs[3]  = inner.z;
      occaKernelArgs[1]  = outer.y; occaKernelArgs[4]  = inner.y;
      occaKernelArgs[2]  = outer.x; occaKernelArgs[5]  = inner.x;

      occaKernelArgs[6]  = start.z; occaKernelArgs[7]  = end.z;
      occaKernelArgs[8]  = start.y; occaKernelArgs[9]  = end.y;
      occaKernelArgs[10] = start.x; occaKernelArgs[11] = end.x;

      int occaInnerId0 = 0, occaInnerId1 = 0, occaInnerId2 = 0;

      sys::runFunction(tmpKernel,
                       occaKernelArgs,
                       occaInnerId0, occaInnerId1, occaInnerId2,
                       pkInfo.argc, pkInfo.args);

      delete [] pkInfo.args;
      delete &pkInfo;
    }
  }
}