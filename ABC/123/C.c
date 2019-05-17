#include<stdio.h>

int main(){
  long x[5], N;
  int i;
  scanf("%ld", &N);

  long min = N;
  for(i = 0; i < 5; i++){
    scanf("%ld", &x[i]);
    if(min > x[i]) min = x[i];
  }
  long T;

  if(N % min == 0) T = N / min;
  else T = N / min + 1;

  printf("%ld\n", 4 + T);

  return 0;
}
