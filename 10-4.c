#include<stdio.h>
void set_idx(int *v,int n){
  int i;
  for(i=0;i<n;i++){
    v[i]=i;
  }
}

int main(){
  int n;
  int i;
  scanf("%d",&n);
  int v[n];
  set_idx(v,n);
  for(i=0;i<n;i++){
    printf("%d",v[i]);
  }
}
