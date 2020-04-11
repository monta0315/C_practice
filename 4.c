#include<stdio.h>
int main(){
  int N;
  int a[200]={0};
  int i;
  int det = 1;
  int count=0;

  scanf("%d",&N);

  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }

  while(det==1){
    for(i=0;i<N;i++){
      if(a[i]%2!=0){
        det =0;
      }
    }

    if(det==1){
      for(i=0;i<N;i++){
        a[i]=a[i]/2;
      }
      count++;
    }
  }
  printf("%d",count);
}
