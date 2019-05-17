#include<stdio.h>

int main(){
  int a[3], b[3];

  int i;

  for(i = 0; i < 3; i++){
    scanf("%d %d", &a[i], &b[i]);
  }

  int c = 0;
  int k[4] = {};

  for(i = 0; i < 3; i++){
    k[a[i]-1]++;
    k[b[i]-1]++;
  }
  
  int d = 0;

  for(i = 0; i < 4; i++){
   if(k[i] == 1) d++;
   else if(k[i] == 2) c++;
  }

  if(d == 2 && c == 2) printf("YES\n");
  else printf("NO\n");

  return 0;
}
