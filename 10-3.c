#include<stdio.h>

void sort3(int *n1,int *n2,int *n3){
  int tmp;
  if(*n1<*n2){
    tmp= *n1;
    *n1= *n2;
    *n2=tmp;
  }
  if(*n1<*n3){
    tmp= *n1;
    *n1= *n3;
    *n3=tmp;
  }
  if(*n2<*n3){
    tmp= *n2;
    *n2= *n3;
    *n3=tmp;
  }
}

int main(){
  int n1,n2,n3;
  scanf("%d %d %d",&n1,&n2,&n3);
  sort3(&n1,&n2,&n3);
  printf("%d %d %d",n1,n2,n3);

}
