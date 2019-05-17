#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  long A[N][2];
  long a1, a2;
  int i;

  for(i = 0; i < N; i++){
    scanf("%ld %ld", &A[i][0], &A[i][1]);
  }

  int s = 1;
  while(s != 0){
    s = 0;
    for(i = 0; i < N - 1; i++){  
      if(A[i][0] - A[i+1][1] < A[i][1] - A[i+1][0]){
        a1 = A[i][0];
        a2 = A[i][1];
        A[i][0] = A[i+1][0];
        A[i][1] = A[i+1][1];
        A[i+1][0] = a1;
        A[i+1][0] = a2;
        s++;
      }
    }
  }

  long c = 0;
  for(i = 0; i < N; i++){
    if(i % 2 == 0) c += A[i][0];
    else c -= A[i][1];
  }
  printf("%ld\n", c);

  return 0;
}
