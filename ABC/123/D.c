#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
  if(*(long*)a - *(long*)b > 0) return -1;
  else if(*(long*)a - *(long*)b < 0) return 1;
  else return 0;
}

void make(long sum[], long A[], long B[], long C[], int X, int Y, int Z, int P[3], int c, int o, int i){
  if(i <= o){
  int j;
  long x = A[P[0]] + B[P[1]] + C[P[2]];

  for(j = 0; j < c; j++){
    if(sum[j] == 0){
      sum[j] = x;
      break;
    }
  }
  int c1 = P[0], c2 = P[1], c3 = P[2];

  printf("%d %ld %d %d %d\n", i, x, c1, c2, c3);

  int P1[3] = {c1+1, c2, c3}, P2[3] = {c1, c2+1, c3}, P3[3] = {c1, c2, c3+1};

  if(sum[c-1] == 0){
  i++;
  if(c1 < X-1){
    make(sum, A, B, C, X, Y, Z, P1, c, o, i);
  }
  if(c2 < Y-1){
    make(sum, A, B, C, X, Y, Z, P2, c, o, i);
  }
  if(c3 < Z-1){
    make(sum, A, B, C, X, Y, Z, P3, c, o, i);
  }
  }
  }
}

int main(){
  int X, Y, Z;
  scanf("%d %d %d", &X, &Y, &Z);

  long A[X], B[Y], C[Z];
  int P[3] = {};
  int K;
  scanf("%d", &K);

  int i;

  for(i = 0; i < X; i++){
    scanf("%ld", &A[i]);
  }

  for(i = 0; i < Y; i++){
    scanf("%ld", &B[i]);
  }

  for(i = 0; i < Z; i++){
    scanf("%ld", &C[i]);
  }

  qsort(A, X, sizeof(long), comp);
  qsort(B, Y, sizeof(long), comp);
  qsort(C, Z, sizeof(long), comp);

  int c = 1;
  int o = 1;
  while(c <= K){
    c += c*3;
    o++;
  }

  printf("%d\n", c);

  long sum[c];
  for(i = 0; i < c; i++){
    sum[i] = 0;
  }
  
  make(sum, A, B, C, X, Y, Z, P, c, o, 0);

  qsort(sum, c, sizeof(long), comp);
  
  printf("Ans\n");

  for(i = 0; i < K; i++){
    printf("%ld\n", sum[i]);
  }

  return 0;
}
