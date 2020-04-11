#include<stdio.h>
#include<string.h>//strlen関数を使用するための許可書
int reverse(char x){
  int count;
  count=strlen(x);
  for(int i=0;i<count;i++){
    x[i]=x[count-i];
  }
  return x;
}

int main(){
  char s[100000];
  char a[]="erase";
  char b[]="eraser";
  char c[]="dream";
  char d[]="dreamer";
  scanf("%s", s);
  int flag=0;

  printf("%s",a);

}
