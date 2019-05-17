#include<stdio.h>

int main(){
  int N;

  scanf("%d", &N);

  int end_a = 0, start_b = 0, middle_ab = 0, both_ab = 0, i, j;
  int len;

  char s[15];

  for(i = 0; i < N; i++){
    scanf("%s", s);
    len = strlen(s);
    if(s[0] == 66 && s[len-1] == 65) both_ab++;
    else if(s[0] == 66) start_b++;
    else if(s[len-1] == 65) end_a++;
    for(j = 0; j < len; j++){
      if(s[j] == 65 && s[j+1] == 66) middle_ab++;
    }
  }

  int ans = middle_ab + both_ab;

  if(end_a < start_b) ans += end_a;
  else ans += start_b;

  if(both_ab != 0){
    if(end_a == 0 && start_b == 0) ans--;
  }

  printf("%d\n", ans);

  return 0;
}
