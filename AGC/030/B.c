#include<stdio.h>
#include<stdlib.h>

int compare_long(const void *a, const void *b){
  if(*(long*)a - *(long*)b >= 0) return 1;
  else return -1;
}

int main(){
  long L;
  int N, i;

  scanf("%ld %d", &L, &N);
  long X[N + 1];
  X[0] = 0;

  for(i = 1; i <= N; i++){
    scanf("%ld", &X[i]);
  }

  qsort(X, N + 1, sizeof(long), compare_long);

  int j, k, l;
  long sum = 0;
  long right, left, dis;

  j = 0;
  dis = 0;
  for(i = 0; i <= N; i++){
    printf("%d\n", j);
    k = 0;
    while(X[j+k] == 0){
      k++;
      if(k + j == N + 1) k = -j;
      if(k == 0) break;
    }
    if(k == 0 && j != 0){
      printf("right\n");
      break;
    }
    else if(j > j + k) right = L - (dis - X[j + k]);
    else if(j < j + k) right = X[j + k] - dis;

    l = 0;
    while(X[j+l] == 0){
      l--;
      if(l + j == -1) l = N - j;
      if(l == 0) break;
    }
    if(l == 0 && j != 0){
      printf("left\n");
      break;
    }
    else if(j < j + l) left = L - (X[j + l] - dis);
    else if(j > j + l) right = dis - X[j + l];

    if(right >= left){
      sum += right;
      j = j + k;
    } else if(right < left){
      sum += left;
      j = j + l;
    }
    dis = X[j];
    X[j] = 0;
    printf("%ld %ld\n", right, left);
  }

  printf("%ld\n", sum);
  
  return 0;
}
