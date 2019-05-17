#include<stdio.h>

int main(){
  int n, k;
  scanf("%d", &n);
  scanf("%d", &k);
  if(n%k == 0){
    printf("0\n");
  } else {
    printf("1\n");
  }
  
  return 0;
}

