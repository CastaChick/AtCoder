#include<stdio.h>

int main(){
  int A, B;

  scanf("%d %d", &A, &B);

  int sum;

  if(A > B) sum = A + A - 1;
  else if(A < B) sum = B + B - 1;
  else sum = A + B;

  printf("%d\n", sum);

  return 0;
}
