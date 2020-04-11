#include<stdio.h>
#include<string.h>
void put_stringn(const char s[],int n){
  int j=0;
  int len=strlen(s);
  while(j<n){
    for(int i=0;i<len;i++){
      printf("%c",s[len-i-1]);
    }
    j++;
  }
}

int main(){
  int num;
  char str[128];
  scanf("%s",str);
  scanf("%d",&num);
  put_stringn(str,num);
}
