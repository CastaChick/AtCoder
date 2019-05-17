#include<stdio.h>

int main(){
  int n, ans;
  scanf("%d", &n);
  if(n%2 == 0){
    ans = n/2 * n/2;
  } else {
    ans = n/2 * (n/2 + 1);
  }

  printf("%d\n", ans);
}
