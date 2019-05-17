#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int N;
  scanf("%d", &N);
  
  int A[N], i, sum = 0;

  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
    sum += A[i];
  }

  int c = 998244353;

  qsort(A, N, sizeof(int), comp);

  
