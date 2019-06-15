// program  to idetify number is perfect of not
 #include<stdio.h>
void main(){
int sum=0, n,i=1;
printf("Enter the number ");
scanf("%d",&n);

while(i<n)
{
if(n%i==0)
sum=sum+i;
i++;
}

if(sum==n)
printf("number is perfect number \n");   		// sample perfect number are 6,28, 8128
else
printf("Yoo nibbaa! number is not perfect \n");
}