#include<stdio.h>

int main(){
  int an[5], i, k;

  for(i = 0; i < 5; i++){
    scanf("%d", &an[i]);
  }
  scanf("%d", &k);

  if(an[4] - an[0] > k){
    printf(":(\n");
  } else {
    printf("Yay!\n");
  }

  return 0;
}

