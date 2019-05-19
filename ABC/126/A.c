#include<stdio.h>

int main(){
  int N, K;
  scanf("%d %d", &N, &K);

  char s[N+2];
  scanf("%s", s);

  s[K - 1] += 32;

  printf("%s\n", s);

  return 0;
}
