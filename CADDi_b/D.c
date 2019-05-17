#include<stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  int c = 0;

  long p;

  int i;

  for(i = 0; i < N; i++){
    scanf("%ld" , &p);
    if(p % 2 == 1){
      c++;
    }
  }

  if(c == 0) printf("second\n");
  else printf("first\n");

  return 0;
}
