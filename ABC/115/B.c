#include<stdio.h>

int main(){
  int N, i, sum;
  sum = 0;
  int max = 0;
  scanf("%d", &N);
  int p[N];
  for(i = 0; i < N; i++){
    scanf("%d", &p[i]);
    sum += p[i];
    if(p[i] > max){
      max = p[i];
    }
  }
  sum -= max/2;

  printf("%d\n", sum);

  return 0;
}
