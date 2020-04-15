#include<stdio.h>
void decrement_date(int *y,int *m,int *d){
  if(*d==1){
    *m=m-1;
    if(*m==4||*m==6){
      *d=30;
    }
    else if(*m==9||*m==11){
      *d=30:
    }
    else if(*m==2){
      *d=29;
    }else{
      *d=31;
    }
  }
  if(*m==1){
    *m=12;
    *y=y-1;
  }
}
