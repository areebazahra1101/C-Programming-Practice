#include<stdio.h>
int main()
{
int n,m,a,b;
scanf("%d %d %d %d",&n,&m,&a,&b);
int cost1=n*a;
int cost2=((n+m-1)/m)*b;
int cost3=(n/m)*b+(n%m)*a;
int min=cost1;
if(cost2<min) min=cost2;
if(cost3<min) min=cost3;
printf("%d\n",min);
return 0;
}
