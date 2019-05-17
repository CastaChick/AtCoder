#include<stdio.h>

int main(){
  long long k = 1;

  int i;
  printf("int C[200] = {");

  for(i = 1; i < 201; i++){
    k *= i;
    k %= 1000000007;

    printf("%lld, ", k);
  }

  printf("}\n");

  return 0;
}
