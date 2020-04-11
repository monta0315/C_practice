#include<stdio.h>
#include<string.h>
void del_digit(char s[]){
  int i;
  int count=0;
  char c[128];
  for(i=0;i<strlen(s);i++){
    if(s[i]>='0'&&s[i]<='9'){
      count++;
    }
    else{
      s[i-count]=s[i];
    }
  }
  s[i-count]='\0';
}
  int main(){
    char str[128];
    scanf("%s",str);
    del_digit(str);
    printf("%s",str);
  }
