#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b){
  return *(int*)b - *(int*)a;
}

int main(){
  int N, i;
  scanf("%d", &N);
  int a[N];
  for(i = 0; i < N; i++) scanf("%d", &a[i]);

  qsort(a, N, sizeof(int), compare_int);

  int dif = 0;

  for(i = 1; i < N; i += 2){
    dif += a[i-1] - a[i];
  }
  if(N % 2 == 1) dif += a[N-1];

  printf("%d\n", dif);

  return 0;
}
