#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base number/n");
  scanf("%f",base);
  printf("enter the height number/n");
  scanf("%f",height);
}
void find_area(float base,float height,float*area)
{
  *area=(base*height)/2;
}
void output(float base,float height,float area)
{
  printf("the area of the triangle with base %f and height %f is %f",base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}
