// program to find the power of number

#include<stdio.h>
void main(){
int ans=1, n,pow;
printf("Enter number and power");
scanf("%d%d",&n,&pow);

while(pow!=0)
{
ans*=n;
pow--;
}
printf("POWER  is %d",ans);
}