#include<stdio.h>

int main(){
  int N, Q;
  scanf("%d %d", &N, &Q);

  char s[N+10];
  scanf("%s", s);

  int A[N+2];
  int i, j, k;

  A[0] = 0;
  A[N+1] = 0;
  int X[26][N+2];

  for(i = 0; i < 26; i++){
    for(j = 0; j < N+2; j++){
      X[i][j] = 0;
    }
  }
  int C[26] = {};
  for(i = 1; i <= N; i++){
    A[i] = 1;
    X[s[i-1]-65][C[s[i-1]-65]] = i;
    C[s[i-1]-65]++;
  }

  char p, q;
  int l;
  scanf("%c", &p);

  for(i = 0; i < Q; i++){
    scanf("%c %c", &p, &q);
    l = p - 65;

    if(q == 76) k = -1;
    else k = 1;

    if(k == -1){
      j = 0;
      while(X[l][j] != 0){
        A[X[l][j] - 1] += A[X[l][j]];
        A[X[l][j]] = 0;
        j++;
      }
    }

    if(k == 1){
      j = 0;
      while(X[l][j] != 0) j++;
      j--;
      while(j >= 0){
        A[X[l][j] + 1] += A[X[l][j]];
        A[X[l][j]] = 0;
        j--;
      }
    }

    scanf("%c", &p);
  }

  printf("%d\n", N - A[0] - A[N+1]);

  return 0;
}
