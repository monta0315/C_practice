#include<stdio.h>

void rev_intary(int v[], int n){
  int i,tmp;
  for(i=0;i<n/2;i++){
    tmp=v[i];
    v[i]=v[n-i-1];
    v[n-i]=tmp;
  }
  for(i=0;i<n;i++){
    printf("%d\n",v[i]);
  }
}

int main(){
  int i,n;
  int v[100]={0};

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  rev_intary(v,n);
}
