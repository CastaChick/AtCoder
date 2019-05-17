#include<stdio.h>

int main(){
  int N, K;

  scanf("%d %d", &N, &K);

  int i;

  char S[N+10];

  scanf("%s", S);

  int X[N];

  for(i = 0; i < N; i++){
    X[i] = S[i] - 48;
  }

  int count[100005] = {};
  int c = 0, j = 0;

  int ins = X[0];

  for(i = 0; i < N; i++){
    if(ins != X[i]){
      ins = X[i];
      j++;
    }
    count[j]++;
  }
  
  int max = 0;

  i = 0; c = 0; j = 0; ins = 0;
  
  while(count[i] != 0){
    if(j < K){;
      if(i % 2 == X[0]){
        j++;
      }
      ins += count[i];
      if(max < ins) max = ins;
      i++;
    }
    else{
      if(i % 2 == X[0]){
        if(X[0] == 1){
          ins -= count[2 * c] + count[2 * c + 1];
        }
        else{
          if(c != 0) ins -= count[2 * c - 1];
          ins -= count[2 * c];
        }
        c++;
      }
      ins += count[i];
      i++;
      if(max < ins) max = ins;
    }
  }

  printf("%d\n", max);

  return 0;
}


