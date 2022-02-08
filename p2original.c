#include<stdio.h>
int input_side()
{
  int a;
  printf("enter the side");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && a!=c)
    return 0;
    else
    return 1;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene=0)
    printf("scalene");
  else
    printf("not scalene");
}
int main()
{
  int x,y,z,a;
  x=input_side();
  y=input_side();
  z=input_side();
  a=check_scalene(x,y,z);
  output(x,y,z,a);
  return 0;
}