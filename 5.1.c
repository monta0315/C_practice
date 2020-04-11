#include<stdio.h>
int main(){
  int N;
  int K;
  int a[200000]={0};
  int b[200000]={0};
  int c[200000]={0};
  int i;
  int j;
  int num;
  int count=0;
  int x=0;


  scanf("%d %d",&N,&K);

  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(a[i]==a[j]){
        b[i]=b[i]+1;
      }
    }
    printf("%d",b[i]);
  }
  printf("\n");
  for(i=0;i<N;++i){
    for(j=i+1;j<N;++j){
      if(c[i]>c[j]){
        num=c[i];
        c[i]=c[j];
        c[j]=num;
      }
    }
    printf("%d",c[i]);
  }
}
