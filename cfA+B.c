#include<stdio.h>
int main()
{
/*int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
int a=n%10;
int b=n/10;
printf("%d\n",a+b);
}*/
int t;
scanf("%d",&t);
while(t--)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a+b==c)
{printf("+\n");}
else if(a-b==c)
{printf("-\n");}
}
return 0;
}
