#include<stdio.h>

int str_char(const char s[],int c){
  int i;
  int count=0;
  for(i=0;s[i]!=0;i++){
    if(s[i]==c){
      count++;
    }
  }
  return count;;
}

int main(void){
  char s[100];
  char ch;
  scanf("%s",s);
  scanf(" %c",&ch);
  printf("%d",str_char(s,ch));

  return 0;
}
