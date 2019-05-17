#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  char s[N+10];

  scanf("%s", s);

  int red = 0;

  int i;

  for(i = 0; i < N; i++){
    if(s[i] == 82) red++;
  }

  if(2 * red > N) printf("Yes\n");
  else printf("No\n");

  return 0;
}
