#include<stdio.h>
int main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
for(int i=1;i*i<=n;i++)
{
if (i*i%2==0)
{
 printf("%d\n",i*i);
}
}
return 0;
}
