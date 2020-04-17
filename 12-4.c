#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct{
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
}Student;

Student scan(){
  Student temp;
  char s;
  int h;
  float w;
  long s;
  scanf("%s %d %f %ld",s,&h,&w,&s);
  temp.name=s;
  temp.height=h;
  temp.weight=w;
  temp.schols=s;

  return temp;
}

void swap_Student(Student *x,Student *y){
  Student temp= *x;
  *x= *y;
  *y=temp;
}

void sort_by_height(Student a[],int n){
  int i,j;
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j++){
      if(a[j-1].height>a[j].height){
        swap_Student(&a[j-1],&a[j]);
      }
    }
  }
}

void sort_by_name(Student a[],int n){
  int i,j;
  for(i=0;i<n-1;i++){
    for(j=n-1;j>i;j++){
      if(a[j-1].name>a[j].name){
        swap_Student(&a[j-1],&a[j]);
      }
    }
  }
}

int main(void){
  int i;
  Student std[]=
}
