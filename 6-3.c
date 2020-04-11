#include <stdio.h>
int sanjyou(int x){
  return x*x*x;
}

int main(){
  int x;
  scanf("%d",&x);
  printf("%d\n",sanjyou(x));
}
