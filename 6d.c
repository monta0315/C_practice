#include<stdio.h>
int main(void){
  int i,j,k,l,m,n;
  int zeros[2][2][2][2][2][2];
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      for(k=0;k<2;k++){
        for(l=0;l<2;l++){
          for(m=0;m<2;m++){
            for(n=0;n<2;n++){
              zeros[i][j][k][l][m][n]=0;
              printf("zeros[%d][%d][%d][%d][%d[%d]] = %d\n",i,j,k,l,m,n,zeros[i][j][k][l][m][n]);
            }
          }
        }
      }
    }
  }
  return 0;
}
