#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a,b,i,lcd;
  a=abs(a);
  b=abs(b);
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  for(i=2;i<=a && i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      lcd=i;
      break;
    }
  }
    if(lcd==-1)
    {
      printf("no common divisor");
    }   
    else
    {
      printf("lcd of %d and %d is %d",a,b,lcd);
    }
  
  return 0;
}