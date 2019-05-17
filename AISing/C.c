#include<stdio.h>

int main(){
  int H, W;
  scanf("%d %d", &H, &W);

  int P[H + 2][W + 2];
  char a = 35;
  char b = 46;
  char k[W+2];

  int i, j;
  for(i = 0; i < H + 2; i++){
    P[i][0] = -1;
    P[i][W+1] = -1;
  }
  for(i = 0; i < W + 2; i++){
    P[0][i] = -1;
    P[H+1][i] = -1;
  }
  for(i = 0; i < H; i++){
    scanf("%s", k);
    for(j = 0; j < W; j++){
      if(k[j] == a) P[i + 1][j + 1] = 1;
      else if(k[j] == b) P[i + 1][j + 1] = 0;
      else P[i + 1][j + 1] = -1;
    }
  }
  
  

  return 0;
}

