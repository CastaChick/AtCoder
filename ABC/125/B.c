#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  int V[N], C[N], i;
  for(i = 0; i < N; i++){
    scanf("%d", &V[i]);
  }

  for(i = 0; i < N; i++){
    scanf("%d", &C[i]);
    C[i] = V[i] - C[i];
  }

  int sum = 0;
  for(i = 0; i < N; i++){
    if(C[i] > 0) sum += C[i];
  }

  printf("%d\n", sum);
  
  return 0;
}
