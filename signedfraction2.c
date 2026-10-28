#include<stdio.h>
int main(){
 int a,b,c,d;
 printf("Enter two fractions separated by a plus sign:");
 scanf("%d/%d+%d/%d",&a,&b,&c,&d);
int numerator=a*d+b*c;
int denominator=b*d;
printf("The sum is %d/%d",numerator,denominator);







 return 0;
         }
