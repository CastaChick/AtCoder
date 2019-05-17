#include<stdio.h>

int main(){
  int N;
  long H, W;

  scanf("%d %ld %ld", &N, &H, &W);

  int i;
  int c = 0;

  long h, w;

  for(i = 0; i < N; i++){
    scanf("%ld %ld", &h, &w);
    if(h >= H && w >= W) c++;
  }

  printf("%d\n", c);

  return 0;
}
