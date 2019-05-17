#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  int x, i;
  scanf("%d", &x);
  int s = x;
  int a[x];
  for(i = 0; i < x; i++) scanf("%d", &a[i]);

  qsort(a, x, sizeof(int), compare_int);

  for(i = 1; i < x; i++){
    if(a[i-1] == a[i]){
      s--;
    }
  }

  printf("%d\n", s);

  return 0;
}
