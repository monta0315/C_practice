#include<stdio.h>
#include<string.h>//strlen関数を使用するための許可書

int reverse(char **);

int main(){
  char s[100000];
  char *a[]="erase";
  char *b[]="eraser";
  char *c[]="dream";
  char *d[]="dreamer";
  scanf("%s", s);

  reverse(a);
}

int reverse(char **p){
  int i,count;
  count = strlen(p);

  for(i=0;i<count;i++){
    p[i]=p[count-i];
  }
  printf("%s",p[i]);
}
