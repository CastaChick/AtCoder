#include<stdio.h>

int main(){
  long ans, N, K, c;
  scanf("%ld %ld", &N, &K);
  c = N/K;

  if(K % 2 == 0){
    ans = c*c*c;
    if((N - K/2) >= 0){
      c = (N - K/2)/K + 1;
      ans += c*c*c;
    } 
  }else {
  ans = c*c*c;
 }

  printf("%ld\n", ans);

  return 0;
}
