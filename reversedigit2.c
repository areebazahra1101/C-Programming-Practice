#include<stdio.h>
int main()
{
  int n;
  printf("Enter a three-digit number:");
  scanf("%d",&n);
  int a=n%100;
  int b=n/100;
  int c=a%10;
  int d=a/10;
  printf("The reversal is: %d%d%d",c,d,b);
  return 0;



}
