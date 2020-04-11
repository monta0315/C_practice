#include<stdio.h>
int main(void){
  srand(10);
  int i,j,k,l;
  a=rand()%3;
  b=rand()%3;
  c=rand()%3;
  d=rand()%3;
  int zeros[a][b][c][d];
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      for(k=0;k<c;k++){
        for(l=0;l<d;l++){
          zeros[i][j][k][l]=0;
          printf("a[%d][%d][%d][%d] = %d\n",i,j,k,l,zeros[i][j][k][l]);
        }
      }
    }
  }
  return 0;
}
