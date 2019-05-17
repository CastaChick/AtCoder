#include<stdio.h>

int main(){
  int N, i, Ans;
  double ave = 0.;
  double minDif = 100*100;
  double dif;
  scanf("%d", &N);
  int A[N];
  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
    ave += A[i];
  }
  ave = ave/N;
  for(i = 0; i < N; i++){
    dif = (A[i] - ave)*(A[i] - ave);
    if(dif < minDif){
      minDif = dif;
      Ans = i;
    }
  }
  printf("%d\n", Ans);
  return 0;
}
