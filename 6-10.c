#include<stdio.h>
void rev_intary(int v1[],const int v2[],int n){
  int i,tmp;
  for(i=0;i<n;i++){
    v1[i]=v2[i];
  }
  for(i=0;i<n/2;i++){
    tmp=v1[i];
    v1[i]=v1[n-i-1];
    v1[n-i-1]=tmp;
  }
  for(i=0;i<n;i++){
    printf("%d\n",v1[i]);
  }
}

int main(){
  int i,n;
  int v1[100]={0};
  int v2[100]={0};

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&v2[i]);
  }
  rev_intary(v1,v2,n);
}
