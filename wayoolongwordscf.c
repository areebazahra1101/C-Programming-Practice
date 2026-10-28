#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
 char n[110];
 scanf("%s",n);
 int length=strlen(n);
if(length>10)
{
printf("%c%d%c\n",n[0],length-2,n[length-1]);
}
else
{
 printf("%s\n",n);
}


 }
return 0;
}
