#include<stdio.h>

int main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  int p[4] = {1, 7, 9, 4};

  int i;

  int k = 0;

  for(i = 0; i < 4; i++){
    if(a == p[i]){
      k++;
      p[i] = -1;
    }
  }


  for(i = 0; i < 4; i++){
    if(b == p[i]){
      k++;
      p[i] = -1;
    }
  }
  for(i = 0; i < 4; i++){
    if(c == p[i]){
      k++;
      p[i] = -1;
    }
  }
  for(i = 0; i < 4; i++){
    if(d == p[i]){
      k++;
      p[i] = -1;
    }
  }

  if(k == 4) printf("YES\n");
  else printf("NO\n");

  return 0;
}

