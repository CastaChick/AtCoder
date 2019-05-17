#include<stdio.h>

int main(){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);

  if((A - C) * (B - C) < 0) printf("Yes\n");
  else printf("No\n");

  return 0;
}
