#include<stdio.h>
int main(){
  int N,A,B,i;
  int a,b,c,d,e,f,g;
  int num=0;

  scanf("%d %d %d",&N,&A,&B);

  for(i=0;i<=N;i++){
    if(i<10){
      if(i >= A && i <= B){
        num=num+i;
      }
    }
    if(i>=10&&i<100){
      a=i/10;
      b=i-a*10;
      c=a+b;
      if(c >= A && c <= B){
        num=num+i;
      }
    }
    if(i>=100&&i<1000){
      a=i/100;
      b=i-100*a;
      c=b/10;
      d=b-10*c;
      e=a+c+d;
      if(e >= A && e <= B){
        num=num+i;
      }
    }
    if(i>=1000&&i<10000){
      a=i/1000;
      b=i-1000*a;
      c=b/100;
      d=b-100*c;
      e=d/10;
      f=d-e*10;
      g=a+c+e+f;
      if(g >= A && g <= B){
        num=num+i;
      }
    }
    if(i==10000){
      num=num+i;
    }


  }
  printf("%d",num);
}
