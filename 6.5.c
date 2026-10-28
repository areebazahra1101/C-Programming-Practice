#include<stdio.h>
int main()
{
int n,digit;
printf("Enter a number:");
scanf("%d",&n);
printf("The reversed number is:");
do
{
  digit=n%10;
  printf("%d",digit);
  n=n/10;
}
while(n!=0);


return 0;
}
