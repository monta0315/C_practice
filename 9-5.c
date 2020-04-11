#include<stdio.h>

int str_char(const char s[],int c){
  int i;
  for(i=0;s[i]!=0;i++){
    if(s[i]==c){
      return (i);
    }
  }
  return (-1);
}

int main(void){
  char s[100];
  char ch;
  scanf("%s",s);
  scanf(" %c",&ch);
  printf("%d",str_char(s,ch));

  return 0;
}
