#include<stdio.h>
int min2(int a,int b){
  int min=a;
  if(a>b){
    min=b;
  }
  return min;
}

int main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);

  printf("%d",min2(a,b));

  return 0;
}
