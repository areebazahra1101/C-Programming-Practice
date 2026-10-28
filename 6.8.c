#include<stdio.h>
int main()
{
int m,w,i;
printf("Enter the number of days in a month:");
scanf("%d",&m);
printf("Enter the starting day of the week:");
scanf("%d",&w);
printf("\nSun Mon Tue Wed Thu Fri Sat\n");
for(i=1;i<w;i++)
{
printf("    ");
}
for(i=1;i<=m;i++)
{
printf("%3d ",i);
if((i+w-1)%7==0)
{
    printf("\n");
}
}
printf("\n");
return 0;
}
