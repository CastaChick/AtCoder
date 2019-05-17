#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  int i;

  for(i = 1; i < 10; i++){
    if(i * 111 >= N){
      printf("%d\n", i*111);
      break;
    }
  }

  return 0;
}
