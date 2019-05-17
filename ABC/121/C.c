#include<stdio.h>
#include<stdlib.h>

int c(const void *a, const void *b){
  if(*(long long int*)a - *(long long int*)b > 0) return 1;
  else if(*(long long int*)a - *(long long int*)b < 0) return -1;
  else return 0;
}

int main(){
  int N, M;
  scanf("%d %d", &N, &M);
  long long int a[N];

  int i;

  long A, B;

  for(i = 0; i < N; i++){
    scanf("%ld %ld", &A, &B);
    a[i] = A * 1000000 + B;
  }

  qsort(a, N, sizeof(long long int), c);

  i = 0;
  long sum = 0;
  long long int sum_m = 0;

  int j;

  while(sum < M){
    for(j = 0; j < a[i] % 1000000; j++){
      sum++;
      sum_m += a[i] / 1000000;
      if(sum == M) break;
    }

    i++;
  }

  printf("%lld\n", sum_m);

  return 0;
}
