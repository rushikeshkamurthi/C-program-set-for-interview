// WAP to finf the number of digits in an integer

#include<stdio.h>

void main()
{
int count=0;
int n;
printf("enter the integer  : ");
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
}
printf("total count of Integer %d \n ",count);
}