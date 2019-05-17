#include<stdio.h>
#include<stdlib.h>

int com(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int N, M;
  scanf("%d %d", &N, &M);
  int X[M];
  int i;
  for(i = 0; i < M; i++){
    scanf("%d", &X[i]);
  }

  qsort(X, M, sizeof(int), com);

  int D[M-1];
  for(i = 0; i < M-1; i++){
    D[i] = X[i+1] - X[i];
  }

  qsort(D, M-1, sizeof(int), com);

  long sum = 0;
  for(i = 0; i < M - N; i++){
    sum += D[i];
  }

  printf("%ld\n", sum);

  return 0;
}
