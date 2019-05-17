#include<stdio.h>

int main(){
  int L;

  scanf("%d", &L);

  long A[L];
  int i;
  int k = 0;
  for(i = 0; i < L; i++){
    scanf("%ld", &A[i]);

    if(A[i] == 0){
      A[i] = -1;
      if(k == i) k++;
    }
    else A[i] = A[i] % 2;
  }
  
  int K = L - 1;

  while(A[K] == -1) K--;

  int c = 0;

  for(i = k; i <= K; i++){
    if(A[i] == -1) c++;
    else if(A[i] == 0){

