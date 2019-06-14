// Program to identify if the charecter is vowel or consonat 
#include<stdio.h>
int main()
{
char ch;
printf("enter the charactor  :   ");
scanf("%c",&ch);
if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
printf("Charactor is vowel \n ");
}
else
printf("charactor is not Consonent \n");
}