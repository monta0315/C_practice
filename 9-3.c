#include<stdio.h>

#define N 50

int main(void){
  int i;
  char s[N][128];

  for(i=0;i<N;i++){
    scanf("%s",s[i]);
    if(s[i]=={"$$$$$"}){
      break;
    }
  }

  for(i=0;i<N;i++){
    printf("%s",s[i]);
  }

}
