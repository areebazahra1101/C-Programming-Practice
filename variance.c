#include<stdio.h>
#include<math.h>
int main()
{
int a,b,v;
printf("Enter number A:");
scanf("%d",&a);
printf("Enter number B:");
scanf("%d",&b);

v=pow((a-b),2)/4;
printf("%d",v);

return 0;
}
