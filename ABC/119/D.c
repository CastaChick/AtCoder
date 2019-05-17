#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
  if(*(long*)a - *(long*)b > 0) return 1;
  else if(*(long*)a - *(long*)b < 0) return -1;
  else return 0;
}

int main(){
  long A, B, q;
  scanf("%ld %ld %ld", &A, &B, &q);

  long S[A], T[B], Q[q];
  long i;

  for(i = 0; i < A; i++){
    scanf("%ld", &S[i]);
  }
  for(i = 0; i < B; i++){
    scanf("%ld", &T[i]);
  }
  for(i = 0; i < q; i++){
    scanf("%ld", &Q[i]);
  }

  qsort(S, A, sizeof(long), comp);
  qsort(T, B, sizeof(long), comp);

  long LT, RT, LS, RS;
  long k;
  long x;

  for(k = 0; k < q; k++){
    i = 0;
    while(Q[k] - S[i] > 0 && i < A){
      i++;
    }
    
    if(i != 0 && i != A){
      LS = Q[k] - S[i+1];
      RS = S[i] - Q[k];
    }
    else if(i == 0){
      LS = S[i] - Q[k];
      RS = LS;
    }
    else if(i == A){
      LS = Q[k] - S[A-1];
      RS = LS;
    }

    i = 0;
    while(Q[k] - T[i] > 0 && i < B){
      i++;
    }
    
    if(i != 0 && i != B){
      LT = Q[k] - T[i+1];
      RT = T[i] - Q[k];
    }
    else if(i == 0){
      LT = T[i] - Q[k];
      RT = LT;
    }
    else if(i == B){
      LT = Q[k] - T[B-1];
      RT = LT;
    }

  x = LT + LS;
  if(x > RT + RS) x = RT + RS;
  if(x > RT + LS*2) x = RT + LS*2;
  if(x > LT + RS*2) x = LT + RS*2;
  if(x > RS + LT*2) x = RS + LT*2;
  if(x > LS + RT*2) x = LS + RT*2;
  
  printf("%ld\n", x);
  }

  return 0;
}
  









