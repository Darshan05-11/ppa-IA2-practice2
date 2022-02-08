#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the composite number");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<=n/2;++i)
    {
      ifn%i==0
        return 0;
      else
      return 1;
    }
}
void output(int n,int composite)
{
  if(composite==0)
    printf("composite");
  else
    printf("not composite");
}
int main()
{
  int n,x;
  n=input_number();
  x=is_composite(n);
  output(n,x);
  return 0;
}