#include<stdio.h>
int min3(int a, int b, int c){
  int min=a;
  if(b<min){
    min=b;
  }
  if(c<min){
    min=c;
  }
  return min;
}

int main(){
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  printf("%d",min3(a,b,c));

  return 0;
}
