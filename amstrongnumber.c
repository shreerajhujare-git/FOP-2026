#include <stdio.h>
int main() {
int sum=0,temp,num,digit;
printf("enter a number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
digit=temp %10;
sum=sum+(digit*digit*digit);
temp=temp/10;
}
if (sum==num){
printf("number is amstrong");
}
else
{
printf("number is not amstrong");
}
return 0;
}