#include<stdio.h>

void mul(int N, double X[N][N], double Y[N][N]){
  int i, j, k;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      Y[i][j] = 0;
      for(k = 0; k < N; k++){
        Y[i][j] += X[i][k] * X[k][j];
      }
    }
  }
}

int main(){
  int N, M;
  scanf("%d %d", &N, &M);

  double X[N][N];
  int i, j, k;
  int a, b;
  int K[M][2];
  for(i = 0; i < M; i++){
    scanf("%d %d", &a, &b);
    K[i][0] = a;
    K[i][1] = b;
    X[a][b] = 1;
    X[b][a] = 1;
  }

  double Y[N][N];
  
  int sum;
  for(i = 0; i < M; i++){
    X[K[i][0]][K[i][1]] = 0;
    X[K[i][1]][K[i][0]] = 0;
    mul(N, X, Y);

    sum = 0;
    for(j = 0; j < N; j++){
      for(k = 0; k < N; k++){
        if(Y[j][k] == 0) sum++;
      }
    }
    printf("%d\n", sum/2);
  }

  return 0;
}
