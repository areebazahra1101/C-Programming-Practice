#include<stdio.h>
int main()
{
int n;
printf("Enter a number between 0 and 32767:");
scanf("%d",&n);
int a=n%8;
int b=n/8;
int c=b%8;
int d=b/8;
int e=d%8;
int f=d/8;
int g=f%8;
int h=f/8;
int i=h%8;
int j=h/8;
printf("In octal, your number is:%d%d%d%d%d",i,g,e,c,a);
return 0;

}
