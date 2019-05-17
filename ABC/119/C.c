#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int check(int A[]){
  int i;
  int c = 0;
  for(i = 0; i < 3; i++){
    if(A[i] == 0) c++;
  }
  if(c == 3) return 1;
  else return 0;
}

int main(){
  int n;
  int L[3];
  scanf("%d %d %d %d", &N, &L[0], &L[1], &L[2]);

  int i;
  int l[N];
  for(i = 0; i < N; i++){
    scanf("%d", &l[i]);
    if(l[i] == L[0]) L[0] == 0;
    else if(l[i] == L[1]){
      L[1] == 0;
      l[i] = 10000;
    }
    else if(l[i] == L[2]){
      L[2] == 0;
      l[i] = 10000;
    }
  }

  
  if(check[L] == 1){
    printf("0\n");
    return 0;
  }
  qsort(l, N, sizeof(int), comp);

  qsort(L, 3, sizeof(int), comp);
  int mp = 0;

  int k;

  while(check == 0){
    for(i = 0; i < N; i++){










