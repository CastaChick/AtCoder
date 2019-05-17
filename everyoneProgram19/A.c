#include<stdio.h>

int main(){
  int n, k;

  scanf("%d %d", &n, &k);

  if(2 * k <= n+1){
    printf("YES\n");
  }
  else printf("NO\n");

  return 0;
}
