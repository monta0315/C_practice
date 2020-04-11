#include<stdio.h>
#include<string.h>

void rev_string(char s[]){
  int i;
  char tmp;
  int t=strlen(s);
  for(i=0;i<(t/2);i++){
    tmp=s[i];
    s[i]=s[t-i-1];
    s[t-i-1]=tmp;
  }
}
int main(){
  char str[128];
  scanf("%s",str);
  rev_string(str);
  printf("%s",str);
}
