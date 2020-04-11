#include<stdio.h>
int main(){
  int i,j;
  int a[4]={4,3,2,1};

  for(i=0;i<4;i++){
    j=a[i]-a[i+1];
    printf("%d",j);
  }
}
