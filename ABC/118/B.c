#include<stdio.h>

int main(){
  int N, M;
  scanf("%d %d", &N, &M);

  int like[M];
  int c;
  int i;
  for(i = 0; i < M; i++) like[i] = 0;
  int K, j;

  for(i = 0; i < N; i++){
    scanf("%d", &K);
    for(j = 0; j < K; j++){
      scanf("%d", &c);
      like[c-1]++;
    }
  }
  int sum = 0;
  for(i = 0; i < M; i++){
    if(like[i] == N){
      sum++;
    }
  }

  printf("%d\n", sum);

  return 0;
}
