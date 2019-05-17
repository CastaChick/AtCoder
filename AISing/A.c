#include<stdio.h>

int main(){
  int N, H, W;
  scanf("%d", &N);
  scanf("%d", &H);
  scanf("%d", &W);
  
  printf("%d\n", (N - H + 1)*(N - W + 1));

  return 0;
}
