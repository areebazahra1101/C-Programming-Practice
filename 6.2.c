#include<stdio.h>
int main()
{
 int h,l,r,gcd;
 printf("Enter the two numbers in descending order:");
 scanf("%d %d",&h,&l);
 while(h%l!=0)
 {
  r=h%l;
  h=l;
  l=r;
 }
 gcd=l;
 printf("%d is the GCD",gcd);
return 0;
}
