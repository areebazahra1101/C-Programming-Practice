#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int x;
scanf("%d",&x);
int best=x;
int worst=x;
int amazing=0;
for(int i=1; i<n; i++)
{
scanf("%d",&x);
if(x>best)
{amazing++;
best=x;}
else if(x<worst)
{amazing++;
worst=x;}
}
printf("%d\n",amazing);
return 0;
}
