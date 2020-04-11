#include<stdio.h>
int main(){
  int i,j,N;
  int a[100]={0};
  int count=0;
  int num;

  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d\n",&a[i]);
  }

    for(i=0;i<N;++i){
    for(j=i+1;j<N;++j){
      if(a[i]>a[j]){
        num=a[i];
        a[i]=a[j];
        a[j]=num;
      }
    }
  }

  for(i=0;i<N;i++){
    if(a[i]==a[i+1]){
      count+=1;
    }
  }
    printf("%d",N-count);
}
