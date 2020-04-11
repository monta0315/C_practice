#include<stdio.h>
void put_stringn(const char s[],int n){
  int j=0;
  while(j<n){
      printf("%s",s);
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
