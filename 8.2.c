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
digit[c]++; }
printf("Digits:     ");
for(i=0;i<10;i++)
{
printf("%d ",i);
}
printf("\nOccurences: ");
for(i=0;i<10;i++)
{
 printf("%d ",digit[i]);
}
return 0;
}
