#include<stdio.h>
#include<math.h>

int main(){
  double N, P, c;

  scanf("%lf %lf", &N, &P);

  long long i, ans;

  double r = 1;

  ans = 1;

  for(i = 1; i <= pow(P, 1/N); i++){
    if((long long int)P % (long long int)i == 0){
      c = pow(i, N);
      if(c > P) break;
      if((long long int)P % (long long int)c == 0) ans = i;
    }
  }

  printf("%lld\n", ans);
  
  return 0;
}
