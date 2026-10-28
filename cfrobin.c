#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,k;
scanf("%d %d",&n,&k);
int givengold=0, currentgold=0;
for(int i=0; i<n; i++)
{
int a;
scanf("%d",&a);
if(a>=k)
{
currentgold+=a;
}
else if(a==0 && currentgold>0)
{
currentgold--;
givengold++;
}
}
printf("%d\n",givengold);
}
return 0;
}
