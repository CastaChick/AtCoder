#include<stdio.h>

int main(){
  int H, W;
  scanf("%d %d", &H, &W);

  int X[H+2][W+2], i, j;

  for(i = 0; i < H + 2;i++){
    X[i][0] = 10000000;
    X[i][W+1] = 10000000;
  }

  for(j = 0; j < W + 2;j++){
    X[0][j] = 10000000;
    X[H+1][j] = 10000000;
  }

  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  char c;
  
  scanf("%c", &c);
  for(i = 1; i <= H; i++){
    for(j = 1; j <= W; j++){
      scanf("%c", &c);
      if(c == 35) X[i][j] = 0;
      else X[i][j] = 10000000;
    }
    scanf("%c", &c);
  }

  int ans = 0;
  int x, y, k, l = -1;;
  
  while(l != 0){
    /*
    printf("%d\n", ans);
    for(i = 1; i <= H; i++){
      for(j = 1; j <= W; j++){
        printf("%d ", X[i][j]);
      }
      printf("\n");
    }
    printf("\n");
    */

    l = 0;
    for(i = 1; i <= H; i++){
      for(j = 1; j <= W; j++){
        if(X[i][j] == 10000000){
          l++;
          for(k = 0; k < 4; k++){
            x = i + dx[k];
            y = j + dy[k];
            if(X[x][y] <= ans){
              X[i][j] = ans+1;
              break;
            }
          }
        }
      }
    }

    if(l != 0) ans++;
    else break;
  }
  printf("%d\n", ans);

  return 0;
}

