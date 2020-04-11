#include<stdio.h>
int main()
{
　char s[3];
  int num=0;
  scanf("%s",s);

  for(int i=0;i<3;i++){
    if(s[i]=='1'){
      num++;
    }
  }
  printf("%d",num);
  return 0;
}
