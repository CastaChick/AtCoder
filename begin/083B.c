#include<stdio.h>

int main(){
  int n, a, b, i, sum, x;
  int count = 0;

  scanf("%d %d %d", &n, &a, &b);

  for(i = 1; i <= n; i++){
    sum = 0;
    x = i;
    while(x > 0){
      sum += x % 10;
      x /= 10;
    }
    if(a <= sum && sum <= b) count += i;
  }

  printf("%d\n", count);

  return 0;
}
