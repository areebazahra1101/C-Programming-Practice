#include<stdio.h>
int main()
{
int k,n,w;
scanf("%d %d %d",&k,&n,&w);
int a=(w*(w+1))/2;
int b=(k*a)-n;
if(b<0)
{
b=0;
}
printf("%d\n",b);
return 0;
}
