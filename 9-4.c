#include<stdio.h>
#include<string.h>

void null_string(char s[]){
  s[0]='\0';
  printf("%s",s);
}
int main(void){
  char s[100];
  scanf("%s",s);
  null_string(s);
}
