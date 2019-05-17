#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int i, c;

  c = 0;
  for(i = 0; i < 4; i++){
    if(n%10 == 2) c++;
    n /= 10;
  }

  printf("%d\n", c);

  return 0;
}

