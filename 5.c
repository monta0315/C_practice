#include<stdio.h>
int main(){
  int N;
  int K;
  int i;
  int j;
  int num;
  int count=0;
  int x=0;


  scanf("%d %d",&N,&K);

  int a[20000]={0};
  int b[20000]={0};
  int c[20000]={0};

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
      if(b[i]>b[j]){
        num=b[i];
        b[i]=b[j];
        b[j]=num;
      }
    }
  }
  for(i=0;i<N;++i){
    printf("%d",b[i]);
  }
  printf("\n");
  for(i=0;i<K;i++){
    x=x+b[x];
  }
  printf("%d",N-x);
}
