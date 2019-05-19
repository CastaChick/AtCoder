#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  int V[100000][100000] = {};

  int x, y, w, i;

  for(i = 0; i < N-1; i++){
    scanf("%d %d %d", &x, &y, &w);
    if(x < y) V[x-1][y-1] = w % 2 + 1;
    else V[y-1][x-1] = w % 2 + 1;
  }

  int X[N];
  X[0] = 0;

  int j;

  for(i = 0; i < N; i++){
    for(j = i + 1; j < N; j++){
      if(V[i][j] != 0){
      if(V[i][j] == 1){
        X[j] = X[i];
      }
      else if(V[i][j] == 2){
        X[j] = (X[i] + 1) % 2;
      }
      }
    }
  }
  for(i = 0; i < N; i++){
    printf("%d\n", X[i]);
  }

  return 0;
}
