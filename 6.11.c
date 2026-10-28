#include<stdio.h>
int main()
{
int i,n;
float sum=1.00,fact=1.00;
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
sum=sum+(1/fact);
}
printf("The value of e is:%.2f",sum);
return 0;
}
