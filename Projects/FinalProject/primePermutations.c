#include<stdio.h>

int answer[5000000];
int primePermutations[5000000];

int main(){
  answer[0] = 0;
  FILE * fi;
  fi = fopen("input.txt","r");
	int t, n, primeCount;
	fscanf(fi, "%d", &t);
  if (1 <= t && t <= 5000000){
    for(int i = 1; i <= t; i++){
      fscanf(fi, "%d", &n);
      if (1 <= n && n <= 5000000){
        if(n == 1){
          answer[n] = 1;
          //printf("Num %d\n", n);
          //printf("Prime Count= %d\n", primeCount);
          printf("%d\n", answer[n]);
        } else {
          primeCount = 1;
          /*
           * Sieve of Eratosthenes algorithm
           * Counter for prime numbers
           * When this algorithm finds a prime number it add + 1 to the variable primeCount
           */
          for(int i = 2; i <= n; i++){
        		if(primePermutations[i] == 0){
        			for(int k = 2 * i; k < n; k = k + i){
                primePermutations[k] = 1;
              }
              primeCount++;
        		}
        		int result = (primePermutations[i - 1] * primeCount) % 1000000007;
            //printf("Num %d\n", n);
            //printf("Prime Count %d\n", primeCount);
        		answer[n] += result;
        	}
          printf("%d\n", answer[n]);
        }
      }
    }
  }
	return 0;
}
