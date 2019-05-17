#include<stdio.h>
#include<stdlib.h>

int main(){
  char s[20];
  scanf("%s", s);
  int i = 2;
  int min = 999;
  int k;
  while(s[i] != NULL){
    k = 100*(int)s[i-2] + 10*(int)s[i-1] + (int)s[i] - 4800 - 480 - 48;
    if(min > abs(k - 753)){
      min = abs(k - 753);
    }
    i++;
  }
  printf("%d\n", min);

  return 0;

}
