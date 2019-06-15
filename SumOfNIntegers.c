// program to find the sum of N natural numbers
#include<stdio.h>
 void main(){
int n,i, sum=0;
printf("enter the range ");
scanf("%d",&n);

while(i<=n)
{
sum=sum+i;

i++;
}
printf("Sum is %d",sum);
}