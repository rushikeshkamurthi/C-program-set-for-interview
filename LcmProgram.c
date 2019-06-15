// Program to find the Lcm of two numbers

#include<stdio.h>
 void main(){
int lcm, num1,num2,i,max;
printf("enter two numbers");

scanf("%d%d",&num1,&num2);
max=(num1>num2)?num1:num2;
i=max;

while(1)
{
if(i%num1==0 && i%num2==0)
{
lcm=i;
break;
}
i+=max;
}

printf("LCM of number is %d \n",lcm);
}