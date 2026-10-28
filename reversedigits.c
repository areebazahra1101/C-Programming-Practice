#include<stdio.h>
int main()
{
 int n;
 printf("Enter a two-digit number:");
 scanf("%d",&n);
 int a=n%10;
 int b=n/10;
 printf("The reversal is: %d%d\n",a,b);
 return 0;
}
