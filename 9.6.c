#include<stdio.h>
int compute_value(int x)
{
return ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
}
int main(void)
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Value:%d",compute_value(x));
    return 0;
}
