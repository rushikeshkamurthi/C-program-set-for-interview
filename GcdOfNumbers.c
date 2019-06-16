// Program to find the GCD of two number
#include<stdio.h>

void main(){

int num1,num2,i,gcd;


printf("Enter the Two numbers");
scanf("%d%d",&num1,&num2);

for(i=;i<=num1&& i<=num2;++i)
{
if(num1%i==0 && num2%i==0)
gcd=i;
}
printf("GCD of two numbers is %d",gcd);
}