#include<stdio.h>

int search_idx(const int v[],int idx[],int key, int n){
  int i;
  int count=0;
  for(i=0;i<n;i++){
    if(v[i]==key){
      idx[i]=i;
      count++;
      printf("%d\n",idx[i]);
    }
  }
  return count;
}

int main(){
  int key,n,i;
  int v[]={100};
  int idx[]={100};

  scanf("%d",&n);
  scanf("%d",&key);
  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
 printf("%d",search_idx(v,idx,key,n));

}
