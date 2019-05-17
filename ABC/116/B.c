#include<stdio.h>

int func(int n){
  if(n % 2 == 0) return n/2;
  else return 3 * n + 1;
}

int main(){
  int N[1000000] = {};

  int s;
  scanf("%d", &s);
  int i, j;
  for(i = 0; i < 1000000; i++){
    N[i] = s;
    s = func(s);
    for(j = 0; j < i; j++){
      if(N[j] == N[i]){
        printf("%d\n", i+1);
        i = 1000000;
        break;
      }
    }
  }

  return 0;
}
