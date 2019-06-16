// program to find whether a number is palindrom or not

#include<stdio.h>
void main(){
int n ,N ,rev=0,temp;
printf("Enter the Number ");
scanf("%d",&n);
N=n;
while(N!=0)
{
temp=N%10;
rev=(rev*10)+temp;
N=N/10;
}
if(rev==n)
printf("Number is palindrom\n");
else
printf("Number is not palindrom\n");
}