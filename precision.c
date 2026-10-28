#include<stdio.h>
int main()
{

 int x; float y;
 printf("Enter the value of x and y:");
 scanf("%d %f",&x,&y);
 printf("The value of x is %d\n",x);
 printf("The value of x is %5d\n",x);
 printf("The value of x is %-5d\n",x);
 printf("The value of x is %5.3d\n",x);
printf("The value of y is %10.3f\n",y);
printf("The value of y is %10.3e\n",y);
 return 0;







}
