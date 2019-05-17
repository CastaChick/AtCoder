#include<stdio.h>

int main(){
  int a, b, c;
  scanf("%d", &a);
  scanf("%d %d", &b, &c);

  char s[100];
  scanf("%s", s);

  printf("%d %s\n", a+b+c, s);

  return 0;
}
