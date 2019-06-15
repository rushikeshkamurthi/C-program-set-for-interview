// program to find the sum of digits
#include<stdio.h>
 void main(){
int n,sum;			// enter interger range number only
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{

sum=sum+(n%10);
n=n/10;
}
printf("sum of digits in number is %d",sum);
}