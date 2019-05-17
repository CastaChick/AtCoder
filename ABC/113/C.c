#include<stdio.h>

long num(int pi, int rank){
  return pi * 1000000 + rank;
}

int main(){
  int i, j, n, m;
  scanf("%d %d", &n, &m);
  int p[m], y[m];
  int rank[m];
  for(i = 0; i < m; i++){
    scanf("%d %d", &p[i], &y[i]);
    rank[i] = 0;
  }
  for(i = 0; i < m; i++){
    for(j = 0; j < m; j++){
      if(p[i] == p[j] && y[i] >= y[j]){
        rank[i]++;
      }
    }
    printf("%012ld\n", num(p[i], rank[i]));
  }

  return 0;
}
