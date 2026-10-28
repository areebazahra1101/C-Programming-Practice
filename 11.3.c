#include<stdio.h>
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
 int h,l,r,gcd;
 l=numerator;
 h=denominator;
 while(h%l!=0)
 {
  r=h%l;
  h=l;
  l=r;
 }
 gcd=l;
*reduced_numerator=numerator/gcd;
*reduced_denominator=denominator/gcd;
}
int main()
{
 int numerator,denominator,reduced_numerator,reduced_denominator;
 printf("Enter the fraction:");
 scanf("%d/%d",&numerator,&denominator);

 reduce(numerator,denominator,&reduced_numerator,&reduced_denominator);

 printf("The reduced fraction is: %d/%d",reduced_numerator,reduced_denominator);
 return 0;
}
