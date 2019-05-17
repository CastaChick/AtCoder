#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int check(long p){
  int c = 0;
  int s[3] = {};

  while(p  > 0){
    c = p % 10;
    p = (p - c)/10;
    if(c == 3){
      s[0]++;
    } else if(c == 5){
      s[1]++;
    } else if(c == 7){
      s[2]++;
    }
  }
  if(s[0] > 0 && s[1] > 0 && s[2] > 0){
    return 0;
  } else {
    return 1;
  }
}

int dfs(long k, int p, int s[3]){
  int i, ret;
  if(k <= p){
    if(check(k) == 0){;
      ret = 1;
      //printf("%ld\n", k);
    } else {
      ret = 0;
    }
    for(i = 0; i < 3; i++){
      ret += dfs(10*k + s[i], p, s);
    }
    return ret;
  } else {
    return 0;
  }
}

int main(){
  int c;
  long p;
  int s[3] = {3, 5, 7};
  scanf("%ld", &p);
  c = dfs(0, p, s);
  printf("%d\n", c);
  return 0;
}


