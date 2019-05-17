#include<stdio.h>
int check(char s[][11], int i){
  int l, m, n;
  n = 0;
  for(l = 0; l < i; l++){
    m = 0;
    while(s[l][m] != 0 || s[i][m] != 0){
      if(s[l][m] != s[i][m]){
        n++; 
        break;
      } else {
        m++;
      }
    }
  }
  if(n == i){
    return 1;
  } else {
    return 0;
  }
}
char last(char s[]){
  char c;
  int i = 0;
  while(s[i] != 0){
    c = s[i];
    i++;
  }
  return c;
}

int main(){
  int N, i, j;

  scanf("%d", &N);

  char s[N][11];
  int c = 1;
  
  for(i = 0; i < N; i++){
    scanf("%s", &s[i][0]);
    if(i != 0){
      if(last(s[i - 1]) != s[i][0]){
        c *= 0;
      }
      c *= check(s, i);
    }
  }
  
  if(c == 0) printf("No\n");
  else printf("Yes\n");

  return 0;
}
