#include<stdio.h>
#include<math.h>

int main(){
  int M, K;
  scanf("%d %d", &M, &K);
  if(K != 0){
    printf("-1\n");
    return 0;
  }

  long i;

  for(i = 0; i < pow(2, M); i++){
    printf("%ld %ld ", i, i);
  }
  
  return 0;
}
