#include<stdio.h>
struct xyz{
  int x;
  long y;
  double z;
};

struct xyz scan_xyz(){
  struct xyz temp;
  int x;
  long y;
  double z;
  scanf("%d %ld %lf",&x,&y,&z);
  temp.x=x;
  temp.y=y;
  temp.z=z;
  return temp;
}

int main(void){
  struct xyz s=scan_xyz();
  printf("%d\n",s.x );
  printf("%ld\n",s.y );
  printf("%lf\n",s.z);

  return 0;
}
