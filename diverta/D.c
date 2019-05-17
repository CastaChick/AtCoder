#include<stdio.h>
#include<math.h>

int main(){
  long N, sum = 0;
  scanf("%ld", &N);

  double max = sqrt(N);

  long i;

  for(i = 1; i < max; i++){
    if(N % i == 0) sum += N / i - 1;
  }

  if(i * (i - 1) == N) sum -= i - 1;

  printf("%ld\n", sum);

  return 0;
}
