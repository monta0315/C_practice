#include<stdio.h>
int sqr(int x){
  return x*x;
}
int pow4(int x){
  return sqr(sqr(x));
}

int main(){
  int x;
  scanf("%d",&x);

  printf("%d",pow4(x));
}
