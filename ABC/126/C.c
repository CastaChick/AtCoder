#include<stdio.h>
#include<math.h>

int main(){
  int N;
  double K;

  scanf("%d %lf", &N, &K);

  int i;

  double sum = 0;
  double lo;

  for(i = 1; i <= N; i++){
    lo = log2(K/i);
    if(lo < 0) lo = 0;
    if(lo != (int)lo) lo++;
    sum += 1./pow(2, (int)lo);
  }
  sum /= N;

  printf("%.10lf\n", sum);

  return 0;
}
