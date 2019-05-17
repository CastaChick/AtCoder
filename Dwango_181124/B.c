#include<stdio.h>
#include<stdlib.h>

long long int Sum(int l, int n, long X[]){
  int k;
  long long ans = 0;
  for(k = 0; k < n; k++){
    ans += X[k+l];
  }
  return ans;
}

int asc(const void *a, const void *b) {
  long long int *A = (long long int *)a;
  long long int *B = (long long int *)b;
  if (*A < *B) return 1;
  if (*A > *B) return -1;
  return 0;
}

int main(){
  int N, K, i, j;
  long x = 0;
  scanf("%d %d", &N, &K);
  long int A[N];
  long long int sum[(long)K*(K+1)/2];
  long long int Ans;
  for(i = 0; i < N; i++){
    scanf("%ld", &A[i]);
  }
  for(i = N; i > N - K; i--){
    for(j = 0; j < N - i + 1; j++){
      sum[x] = Sum(j, i, A);
      x++;
    }
  }
  qsort(sum, x, sizeof(long long int), asc);
  Ans = sum[0];
  for(i = 1; i < K; i++){
    Ans = Ans & sum[i];
  }
  printf("%lld\n", Ans);

  return 0;
}
