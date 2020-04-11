#include<stdio.h>

#define max(x,y) (((x)>(y))?(x):(y))

int main(){
  int a,b,c,d;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);

  printf("%d",max(max(a,b),max(c,d)));
  printf("%d",max(max(max(a,b),c),d));
}
