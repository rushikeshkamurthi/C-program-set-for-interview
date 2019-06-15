// program to revers the digits
#include<stdio.h>
 void main(){
int rev=0,n,temp;
printf("enter the number : ");
scanf("%d",&n);
while(n!=0)
{
temp=n%10;
rev=(rev*10)+temp;
n=n/10;

}
printf("revers number is %d \n",rev);
}