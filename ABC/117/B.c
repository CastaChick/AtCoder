#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  int L[N];
  int i, sum, max;

  max = 0;
  sum = 0;

  for(i = 0; i < N; i++){
    scanf("%d", &L[i]);
    sum += L[i];
    if(L[i] > max) max = L[i];
  }

  if(sum - max > max) printf("Yes\n");
  else printf("No\n");

  return 0;
}
