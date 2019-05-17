#include<stdio.h>

int main(){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);

  int K = B/A;
  if(K <= C) printf("%d\n", K);
  else printf("%d\n", C);

  return 0;
}
