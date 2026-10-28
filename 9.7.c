#include<stdio.h>
int power(int x, int n)
{
 if(n==0)
 return 1;
 if(n%2==0)
{
int y=power(x,n/2);
 return y*y;
}
 else
 return x*power(x,n-1);
}
int main(void)
{
    int x,n;
 printf("Enter x and n: ");
 scanf("%d%d",&x,&n);
 printf("Value:%d",power(x,n));
 return 0;
}
