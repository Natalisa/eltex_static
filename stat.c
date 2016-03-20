#include <stdio.h>
#include "calc.h"
int main(){
  float a,b,rez;
  char zn;
  scanf("%f %c %f",&a,&zn,&b);
  if(zn=='+') rez=add(&a,&b);
  else if(zn=='-') {b=-b;rez=add(&a,&b);}
  else if(zn=='/') rez=sub(&a,&b);
  else if(zn=='*') rez=mul(&a,&b);
  printf("\n%f %c %f = %f\n",a,zn,b,rez);
  return 0;
}
