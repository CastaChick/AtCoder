#include<stdio.h>

int main(){
  int x, c, i;
  c = 0;
  
  scanf("%d", &x);

  for(i = 0; i < 3; i++){
    c += x % 10;
    x = x / 10;
  }

  printf("%d\n", c);

  return 0;
}
