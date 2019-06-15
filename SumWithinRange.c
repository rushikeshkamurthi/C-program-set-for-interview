// to find the sum of integer within a range

#include<stdio.h>
 void main(){
int l,u,sum=0,i;

printf("enter the range : ");
scanf("%d%d",&l,&u);
if(l<u){
for(i=l;i<=u;i++)
{
sum+=i;

}
printf("Sum is %d",sum);
}
else
printf("given range is wrong hence sum is 0");
}