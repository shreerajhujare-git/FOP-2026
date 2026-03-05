// program to calculate gcd of two numbers using recursion
#include <stdio.h>  
int main()
{
    int num1,num2,gcd,lcd,a,b,i;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    a=num1;
    b=num2;
    for(int i=1; i<=num1 && i<=num2; i++) {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
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
      printf("lcd of %d and %d is %d\n",a,b,lcd);
    }
  
   
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("lcd of %d and %d is %d\n",a,b,lcd);   
    return 0;
    }