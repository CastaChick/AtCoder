#include<stdio.h>

int main(){
  int H, W, N;
  scanf("%d %d %d", &H, &W, &N);

  int Sh, Sw;
  scanf("%d %d", &Sh, &Sw);

  char S[N+3], T[N+3];
  scanf("%s", S);
  scanf("%s", T);

  int i, Of[4] = {}, Def[4] = {};

  for(i = 0; i < N; i++){
    if(S[i] == 76) Of[0]++;
    else if(S[i] == 82) Of[1]++;
    else if(S[i] == 85) Of[2]++;
    else if(S[i] == 68) Of[3]++;

    if(Sw - Of[0] + Def[1] <= 0){
      printf("NO\n");
      return 0;
    }
    
    if(Of[1] - Def[0] + Sw > W){
      printf("NO\n");
      return 0;
    }
    
    if(Sh - Of[2] + Def[3] <= 0){
      printf("NO\n");
      return 0;
    }
    
    if(Of[3] - Def[2] + Sh > H){
      printf("NO\n");
      return 0;
    }
    

    if(T[i] == 76 && Sw - Def[0] > 1) Def[0]++;
    else if(T[i] == 82 && Sw + Def[1] < W) Def[1]++;
    else if(T[i] == 85 && Sh - Def[2] > 1) Def[2]++;
    else if(T[i] == 68 && Sh + Def[3] < H) Def[3]++;
  }
  
  printf("YES\n");

  return 0;
}
