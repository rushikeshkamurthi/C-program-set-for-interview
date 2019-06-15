// program to find strong number or not
int fact(int a);

#include<stdio.h>
 void main(){
int  temp1,sum=0,n ,temp ,a,f=0;
printf("enter a Number");
scanf("%d",&n);
temp1=n;
while(n!=0)
{
temp=n%10;
sum=sum+fact(temp);
n=n/10;
}
printf("Sum  is %d \n",sum);
if(sum==temp1)
printf("number is strong number \n");
else
printf("Number is not strong Number \n");

}
int fact(int a){

int c,i,fact1=1;
c=a;
for(i=1;i<=a;++i){
fact1=fact1*i;
}
printf("factorial of %d is %d \n",c,fact1);
return(fact1);
}