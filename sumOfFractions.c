// program to add two fractions
#include<stdio.h>
void main()
{
int x1,y1,x2,y2;
float x,y, sum;
printf("enter first fraction number x1/y1 :");
scanf("%d %d",&x1,&y1);
printf("enter second fraction number x2/y2 ");
scanf("%d %d",&x2,&y2);

y=(float)(x1+x2);
x= (float)(x1*y2)+(float)(y2*x2);
printf("%d %d ",x,y);
sum=(x/y);

printf("sum of fraction is %.2f\n",sum);


}