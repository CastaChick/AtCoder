#include<stdio.h>

int main(){
  int N, M, C;
  scanf("%d %d %d", &N, &M, &C);

  int B[M], A[M], sum = 0;
  int c = 0;

  int i, j;
  for(i = 0; i < M; i++){
    scanf("%d", &B[i]);
  }

  for(i = 0; i < N; i++){
    c = 0;
    for(j = 0; j < M; j++){
      scanf("%d", &A[j]);
      c += A[j] * B[j];
    }

    c += C;
    if(c > 0) sum++;
  }

  printf("%d\n", sum);

  return 0;
}

