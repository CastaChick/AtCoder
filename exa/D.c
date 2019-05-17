#include<stdio.h>
#include<stdlib.h>
long np(int n){
  long k, i;
  k = 1;
  for(i = 1; i <= n; i++){
    k *= i;
    //k = k % 1000000007;
  }

  return k;
}
int comp(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int N, X;
  scanf("%d %d", &N, &X);

  int S[N];
  int i, j;
  long long sum = 0;
  long long ans = X;
  for(i = 0; i < N; i++){
    scanf("%d", &S[i]);
  }

  qsort(S, N, sizeof(int), comp);

  for(i = 0; i < N; i++){
    ans = X;
    for(j = i; j >= 0; j--){
      ans %= S[j];
    }
    printf("%lld\n", ans);
    ans *= np(N-1);
    //ans = ans % 1000000007;
    ans /= np(i);
    //ans = ans % 1000000007;
    printf("%lld\n", ans);
    sum += ans;
    //sum = sum % 1000000007;
  }

  printf("%lld\n", sum);

  return 0;
}
