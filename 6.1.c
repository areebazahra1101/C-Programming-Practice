#include<stdio.h>
int main()
{


float a,largest=0;
printf("Enter a number:");
scanf("%f",&a);
while(a>0)
{
if(a>largest)
{
largest=a;
}
printf("Enter a number:");
scanf("%f",&a);
}
printf("The largest number entered was %f",largest);
return 0;
}
