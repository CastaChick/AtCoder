#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  int H[N], i;

  for(i = 0; i < N; i++){
    scanf("%d", &H[i]);
  }

  int ans = 0;

  int max = 0;

  for(i = 0; i < N; i++){
    if(max <= H[i]){
      ans++;
      max = H[i];
    }
  }

  printf("%d\n", ans);

  return 0;
}
