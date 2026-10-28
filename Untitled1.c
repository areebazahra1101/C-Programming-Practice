#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,x,row,col;
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            row=i;
            col=j;
        }
    }
}
printf("%d\n",abs(row-3)+abs(col-3));
return 0;
}
