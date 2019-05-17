#include<stdio.h>

int main(){
  int K;
  scanf("%d", &K);

  int i, j;

  if(K <= 500){
    for(i = 1; i <= K; i++){
      for(j = 0; j < K; j++){
        printf("%d", i);
        if(j != K - 1) printf(" ");
      }
      printf("\n");
    }
    return 0;
  }

  if(K % 4 == 0){
    for(i = 1; i <= K; i += 2){
      for(j = 0; j < K/4; j++){
        printf("%d %d", i, i+1);
        if(j != K/2 - 1) printf(" ");
      }
      printf("\n");
    }
    return 0;
  }

  if(K % 4 == 2){

