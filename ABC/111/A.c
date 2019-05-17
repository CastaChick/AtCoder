#include<stdio.h>

int main(){
  int c;
  scanf("%d", &c);

  if(c%10 == 1) c += 8;
  else c -= 8;
  
  if(c/10%10 == 1) c += 80;
  else c -= 80;

  if(c/100%10 == 1) c += 800;
  else c -= 800;

  printf("%d\n", c);

  return 0;
}
