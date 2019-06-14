// WAP to print Fibbonaccy series up to N numbers
#include<stdio.h>

void main(){

int fib, i,n,a,b;
printf("Enter the number");
scanf("%d",&n);
a=-1; 		// to start series with 0 
b=1;		// thus making a+b=0 in first loop
printf("Fibbonacy series : \n"); 
for(i=0;i<=n;i++)
{
fib=a+b;
printf("%d ",fib);
a=b;			//SWAP the values 
b=fib;			//SWAP 		

}
printf("\n");  	// just to jump to new line After printing the series
}