#include<stdio.h>

int main(){
  int N, A, B, c1, c2, c3;
  scanf("%d", &N);
  scanf("%d %d", &A, &B);

  c1 = 0;
  c2 = 0;
  c3 = 0;

  int P[N];
  int i;

  for(i = 0; i < N; i++){
    scanf("%d", &P[i]);
    if(P[i] <= A) c1++;
    else if(P[i] <= B) c2++;
    else c3++;
  }

  int min = c1;
  if(min > c2) min = c2;
  if(min > c3) min = c3;

  printf("%d\n", min);

  return 0;
}
