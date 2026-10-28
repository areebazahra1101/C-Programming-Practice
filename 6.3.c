#include<stdio.h>
int main()
{
int l,h,num,den,r,gcd;
printf("Enter a fraction:");
scanf("%d/%d",&l,&h);
num=l;
den=h;
while(h%l!=0)
{
r=h%l;
h=l;
l=r;
}
gcd=l;
int num1=(num/gcd);
int den1=(den/gcd);
printf("In lowest terms:%d/%d",num1,den1);
return 0;
}
