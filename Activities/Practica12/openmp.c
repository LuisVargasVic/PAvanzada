#include <stdio.h>
#include <omp.h>
// export OMP_NUM_THREADS = 400

int main(){
    int tid;
    int gid = 1;
    #pragma omp parallel private(tid) shared(gid)
    {
      tid = omp_get_thread_num();
      gid = tid;
      printf("Hello World %d %d\n", tid, gid);

    }
}
