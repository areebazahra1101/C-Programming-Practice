#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a>=0 && a<=9){printf("The number has 1 digit");}
if(a>=10 && a<=99){printf("The number has 2 digits");}
if(a=>100 && a<=999){printf("The number has 3 digits");}
return 0;
}
