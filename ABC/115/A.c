#include<stdio.h>

int main(){
  int day;
  scanf("%d", &day);

  day = -(day - 25);
  int i;
  printf("Christmas ");
  for(i = 0; i < day; i++){
    printf("Eve ");
  }

  return 0;
}
