#include<stdio.h>

int main(){
  int N, A, B;

  scanf("%d %d %d", &N, &A, &B);

  int max, min;

  if(A > B) max = B;
  else max = A;

  min = A + B - N;
  if(min <= 0) min = 0;

  printf("%d %d\n", max, min);

  return 0;
}
