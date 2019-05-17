#include<stdio.h>

int main(){
  long long int N, A, B;

  scanf("%lld %lld %lld", &N, &A, &B);

  if(B - A <= 2){
    printf("%lld\n", N+1);
    return 0;
  }

  long long int have = 1;
  long long int i = 0;

  while(i < N){
    if(have < A){
      have++;
      i++;
    }
    else{
      have = have - A + B;
      i += 2;
    }
  }

  if(i == N) printf("%lld\n", have);
  else if(i == N+1){
    printf("%lld\n", have - B + A + 1);
  }

  return 0;
}
