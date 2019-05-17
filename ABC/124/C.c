#include<stdio.h>

int main(){
  char s[100010];

  scanf("%s", s);

  int one[2] = {}, zero[2] = {};

  int i = 0;

  while(s[i] == 48 || s[i] == 49){
    if(i % 2 == 0 && s[i] == 48) zero[0]++;
    else if(i % 2 == 0 && s[i] == 49) one[0]++;
    else if(s[i] == 48) zero[1]++;
    else if(s[i] == 49) one[1]++;

    i++;
  }

  int ans = 0;

  ans = zero[0] + one[1];
  
  if(ans > zero[1] + one[0]) ans = zero[1] + one[0];

  printf("%d\n", ans);

  return 0;
}
