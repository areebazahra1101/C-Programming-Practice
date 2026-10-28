#include<stdio.h>
int main()
{
int a,b;
printf("ENter the valur of a,b:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The changed value of a,b is: %d %d",a,b);

return 0;
}
