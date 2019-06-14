// WAP to finf the factorial of the number

#include<stdio.h>
void main(){
int i ,n ,fact=1;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++){

fact=fact*i; 		// 5 factorial is nothing but 1*2*3*4*5 =120 
}

printf("Factorial : %d \n ", fact );
}