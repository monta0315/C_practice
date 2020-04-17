#include<stdio.h>
#define NAME_LEN 64

typedef struct student{
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
}Student;

void hiroko(Student *std){
  if(std->height<180){
    std->height=180;
  }
  if(std->weight>70){
    std->weight=70;
  }
}
int main(void){
  int h;
  float w;
  long s;
  scanf("%d\n",&h);
  scanf("%f\n",&w);
  scanf("%ld\n",&s);
  Student sanaka={"sanaka",h,w,s};
  hiroko(&sanaka);
  printf("%s\n",sanaka.name);
  printf("%d\n",sanaka.height);
  printf("%.1f\n",sanaka.weight);
  printf("%ld\n",sanaka.schols);

  return 0;

}
