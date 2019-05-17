#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  double X[N];
  char s[5];
  double sum = 0;

  int i;
  
  for(i = 0; i < N; i++){
    scanf("%lf %s", &X[i], s);
    if(s[0] == 74) sum += X[i];
    else if(s[0] == 66) sum += X[i] * 380000.0;
  }

  printf("%lf\n", sum);

  return 0;
}
