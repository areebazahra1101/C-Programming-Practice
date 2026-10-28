#include<stdio.h>
#define N 10
int main()
{
int i;
char c;
int digit[N]={0};
printf("Enter a number:");
while((c=getchar())!='\n')
{
c=c-'0';
digit[c]++;
}
printf("Repeated digit(s):");
for(i=0;i<10;i++)
{
if(digit[i]>1)
{
printf("%d ",i);
}
}
return 0;
}
