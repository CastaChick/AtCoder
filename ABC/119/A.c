#include<stdio.h>

int main(){
  int y, m, d;
  scanf("%d/%d/%d", &y, &m, &d);

  if(y < 2019 || (y == 2019 && m < 4) || (y == 2019 && m == 4 && d <= 30)){
    printf("Heisei\n");
  }
  else printf("TBD\n");

  return 0;
}
