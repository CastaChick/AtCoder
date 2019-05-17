#include<stdio.h>

int main(){
  char S[200000];
  scanf("%s", S);

  int c1 = 0, c0 = 0;

  int i = 0;
  
  while(S[i] == 49 || S[i] == 48){
    if(S[i] == 49) c1++;
    else if(S[i] == 48) c0++;
    i++;
  }

  if(c1 > c0) printf("%d\n", c0 * 2);
  else printf("%d\n", c1 * 2);

  return 0;
}

