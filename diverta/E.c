#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
  if(*(long*)a - *(long*)b > 0) return 1;
  else if(*(long*)a - *(long*)b < 0) return -1;
  else return 0;
}

int main(){
  long N;
  scanf("%ld", &N);

  long i, A[N];
  for(i = 0; i < N; i++){
    scanf("%ld", &A[i]);
  }

  long c = 0, sep = 0, max = 1048576;
  long B[N];
  long temp = 1;
  long ans = 1;
  long C[max] = {};
  long p = 1000000000 + 1;

  for(i = 0; i < N; i++){
    c = c ^  A[i];
    C[c]++;
    if(c == 0) B[i] = 1;
    else B[i] = 0;
  }

  for(i = N-1; i > 0; i--){
    if(B[i] == 1){
      ans *= 2;
      ans %= p;
    }
  }

  printf("%ld\n", ans);

  return 0;
}
