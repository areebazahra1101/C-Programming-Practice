#include<stdio.h>
int main()
{
int i=0;
char c;
int digit[10];
int repeated=0;
while(1)
{
for(i=0;i<10;i++)
{
digit[i]=0;
}
printf("Enter a number: ");
c=getchar();
if(c=='0'||c=='-')
break;
c=c-'0';
digit[c]++;
while((c=getchar())!='\n')
{
c=c-'0';
digit[c]++;
}
for(i=0;i<10;i++)
{
if(digit[i]>1)
repeated=1;
}
if(repeated)
    printf("Repeated digit found\n");
else
    printf("No repeated digit found\n");
}
return 0;
}
