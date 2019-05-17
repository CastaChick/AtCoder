#include<stdio.h>

int main(){
  int X[5], i;
  int Y[5];

  for(i = 0; i < 5; i++){
    scanf("%d", &X[i]);
    Y[i] = X[i] % 10;
  }

  int min = 10;
  int index = 0;

  for(i = 0; i < 5; i++){
    if(Y[i] < min && Y[i] != 0){
      min = Y[i];
      index = i;
    }
  }
  int time = 0;

  for(i = 0; i < 5; i++){
    if(i != index) time += X[i];
    while(time % 10 != 0) time++;
  }

  printf("%d\n", time + X[index]);

  return 0;
}
