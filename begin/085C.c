#include<stdio.h>

int main(){
  int N, Y, l, m, a, b, c;
  scanf("%d %d", &N, &Y);
  a = -1;
  b = -1;
  c = -1;
  for(l = 0; l <= N; l++){
    for(m = 0; m <= N - l; m++){
      if(10000*l + 5000*m + 1000*(N - l - m) == Y){
        a = l;
        b = m;
        c = N - l - m;
        break;
      }
    }
    if(a != -1) break;
  }
  printf("%d %d %d\n", a, b, c);

  return 0;
}
