#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  if(n%7 == 0){
    printf("Yes\n");
  } else {
    while(n > 3){
      n = n - 4;
      if(n%7 == 0){
        printf("Yes\n");
        break;
      }
    }
    if(n <= 3 && n != 0){
      printf("No\n");
    }
  }
  return 0;
}

