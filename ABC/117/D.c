#include<stdio.h>
long func(int N, long A[N], long X){
  long f = 0;
  int i;
  for(i = 0; i < N; i++){
    f += X ^ A[i];
  }

  return f;
}

int main(){
  int N, i;
  long K, j;
  scanf("%d %ld", &N, &K);
  long A[N];
  for(i = 0; i < N; i++){
    scanf("%ld", &A[i]);
  }

  long max = 0;
  long c;
  for(j = 0; j < K+1; j++){
    c = func(N, A, j);
    if(c > max) max = c;
  }

  printf("%ld\n", max);

  return 0;
}
