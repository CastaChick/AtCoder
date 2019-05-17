#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  char S[N + 2];
  scanf("%s", S);

  int c[N][2];

  int i, w = 0, b = 0;

  for(i = 0; i < N; i++){
    if(S[i] == 35){
      b++;
    } else {
      w++;
    }
    c[i][0] = w;
    c[i][1] = b;
  }

 int min = w;
 if(b < min) min = b;
 
 for(i = 0; i < N; i++){
   if(min > w - c[i][0] + c[i][1]) min = w - c[i][0] + c[i][1];
 }

 printf("%d\n", min);

 return 0;
}
