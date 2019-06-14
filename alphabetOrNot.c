// Program to identify if the charactor is alphabet or not

#include<stdio.h>

void main(){
char ch;
int n;
printf("Enter the charactor : ");
scanf("%c",&ch);
n=ch;
if((n>=65 && n<=90) ||(n>=97 && n<=122)) // ASCII values of capital and small Alphabets capital(65-90)
{					 //Small(97-122) ASCII values	
printf("Charactor is Alphabet \n");
}else{
printf("Charactor is not Alphabet \n");
}
}