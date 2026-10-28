#include<stdio.h>
int main()
{
int n;
printf("Enter 4 digit integer:");
scanf("%d",&n);
int e=(n/1000)+1;
int f=((n%1000)/100)+1;
int g=(((n%1000)%100)/10)+1;
int h=(((n%1000)%100)%10)+1;
printf("%d%d%d%d\n",h,g,f,e);
return 0;
}
