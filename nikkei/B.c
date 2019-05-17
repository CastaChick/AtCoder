#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  char A[N+1], B[N+1], C[N+1];
  scanf("%s", A);
  scanf("%s", B);
  scanf("%s", C);


  int i, c;
  c = 0;

  for(i = 0; i < N; i++){
    if(A[i] == B[i] && A[i] == C[i]) c = c;
    else if(A[i] == B[i]) c++;
    else if(B[i] == C[i]) c++;
    else if(C[i] == A[i]) c++;
    else c += 2;
  }

  printf("%d\n", c);

  return 0;
}
