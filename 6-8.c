#include<stdio.h>
 void min_of(const int v[], int N){
   int i;
   int min=v[0];
   for(i=0;i<N;i++){
     if(v[i]<min){
       min=v[i];
     }
   }
   printf("%d",min);
 }

 int main(){
   int i,N;
   int v[100]={0};
   scanf("%d",&N);
   for(i=0;i<N;i++){
     scanf("%d",&v[i]);
   }
   min_of(v,N);
 }
