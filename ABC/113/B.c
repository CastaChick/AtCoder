#include<stdio.h>
#include<math.h>

double dis(int T, double h, int Ta){
  return pow(Ta - (T - h*0.006), 2);
}

int main(){
  int i, n, t, ta, k;
  k = 0;
  double min = dis(50, pow(10, 5), 50);
  scanf("%d", &n);
  scanf("%d %d", &t, &ta);
  double h[n];
  for(i = 0; i < n; i++){
    scanf("%lf", &h[i]);
    h[i] = dis(t, h[i], ta);
    if(h[i] < min){
      min = h[i];
      k = i;
    }
  }
  printf("%d\n", k + 1);

  return 0;
}
