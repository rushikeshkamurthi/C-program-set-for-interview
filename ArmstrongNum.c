// Program to find whether a number is armstrong or not
#include<stdio.h>
void main()
{
int N,n,temp,res;

printf("Enter the Number : ");
scanf("%d",&n);
N=n;
while(n!=0)
{
temp=n%10;
temp=temp*temp*temp;
res+=temp;
n=n/10;

}

if(res==N)
printf(" %d Number is Armstrong Number\n", N);
else
printf("%d Number is not Armstrong Number \n", N);
}