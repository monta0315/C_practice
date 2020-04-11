#include<stdio.h>
int main(){
  int N,i,j;
  int a[100]={0};
  int num=0;
  int c,b;
  scanf("%d",&N);

  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<N;++i){
    for(j=i+1;j<N;++j){
      if(a[i]>a[j]){
        num=a[i];
        a[i]=a[j];
        a[j]=num;
      }
    }
    printf("%d",a[i]);
  }
  for(i=0;i<N;i++){
    if(i%2==0){
      c=c+a[i];
    }else{
      b=b+a[i];
    }
  }
  printf("%d",c-b);
}
