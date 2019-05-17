#include<stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  int A[n];
  int i, j, k;
  long int sum = 0;
  long int ans = 0;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  for(i = 0; i < n; i++){
    sum = 0;
    for(j = i; j < n; j++){
      sum += (long int)A[j];
      if(sum % m == 0){
        ans += 1;
      }
    }
  }
  printf("%ld\n", ans);
//TimeOut
  return 0;
}
