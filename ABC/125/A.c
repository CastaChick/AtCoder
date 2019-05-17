#include<stdio.h>

int main(){
  int A, B, T;
  scanf("%d %d %d", &A, &B, &T);
  int sum = 0, time = 0;

  while(time + A<= T){
    sum += B;
    time += A;
  }

  printf("%d\n", sum);

  return 0;
}
