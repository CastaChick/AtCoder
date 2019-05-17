#include<stdio.h>
#include<math.h>

int main(){
  int N, i, min, c;
  scanf("%d", &N);
  min = (int)log2(pow(10, 9));
  int A[N];

  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
    c = 0;
    while(A[i] % 2 == 0){
      A[i] /= 2;
      c++;
    }

    if(min > c){
      min = c;
    }
  }
  printf("%d\n", min);

  return 0;
}
