#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
  if(*(long*)a - *(long*)b > 0) return 1;
  else if(*(long*)a - *(long*)b < 0) return -1;
  else return 0;
}

int main(){
  int N;
  long M;

  scanf("%d %ld", &N, &M);
  M = (M-1) / 2;

  long A[2*N];
  int i;
  for(i = 0; i < 2*N; i++){
    scanf("%ld", &A[i]);
    A[i] %= M;
  }

  qsort(A, 2*N, sizeof(long), comp);
  
  long MAX = 0;
  long T;
  for(i = 0; i < N; i++){
    T = A[i] + A[2*N - 1 - i];
    if(T > MAX) MAX = T;
  }

  printf("%ld\n", MAX);

  return 0;
}
