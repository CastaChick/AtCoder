#include<stdio.h>

int main(){
  int x[4];
  int y[4];

  scanf("%d %d %d %d", &x[0], &y[0], &x[1], &y[1]);
  
  x[3] =-(y[1] - y[0]) + x[0];
  y[3] = (x[1] - x[0]) + y[0];
  
  x[2] = x[1] + x[3] - x[0];
  y[2] = y[1] + y[3] - y[0];

  printf("%d %d %d %d\n", x[2], y[2], x[3], y[3]);

  return 0;
}
