#include<stdio.h>

int main(){
  int a, b, c, X, l, m, n, count;
  scanf("%d\n%d\n%d\n%d", &a, &b, &c, &X);
  count = 0;

  for(l = 0; l <= a; l++){
    for(m = 0; m <= b; m++){
      for(n = 0; n <= c; n++){
        if(500*l + 100*m + 50*n == X) count++;
      }
    }
  }
  printf("%d\n", count);

  return 0;
}
