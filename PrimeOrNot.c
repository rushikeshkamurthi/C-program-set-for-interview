// Program to state whether a number is prime or not

#include<stdio.h>
void main(){
int n,i,flag;

printf("Enter the number");
scanf("%d",&n);
flag=0;
if(n<=1)
{
printf("Number smaller than 1 or 1 Cannor be prime number");
}
else
{
for(i=2;i<=n/2;i++)
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("Number is prime Number\n");
else
printf("number is not prime Number \n");
}