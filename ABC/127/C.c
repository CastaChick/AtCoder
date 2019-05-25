#include<stdio.h>

int main(){
  int N, M;
  scanf("%d %d", &N, &M);

  int L = 1, R = N;

  int i, l, r;

  for(i = 0; i < M; i++){
    scanf("%d %d", &l ,&r);

    if(L < l) L = l;
    if(R > r) R = r;
  }

  if(R - L + 1 < 0){
    printf("0\n");
    return 0;
  }

  printf("%d\n", R - L + 1);

}
