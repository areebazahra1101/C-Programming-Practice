#include<stdio.h>
int main()
{
int a,b,c,d,largest,smallest;
printf("Enter four integers:");
scanf("%d %d %d %d",&a,&b,&c,&d);
largest=smallest=a;
if(b>largest){largest=b;}
if(b<smallest){smallest=b;}
if(c>largest){largest=c;}
if(c<smallest){smallest=c;}
if(d<smallest){smallest=d;}
if(d>largest){largest=d;}
printf("Largest=%d Smallest=%d",largest,smallest);
return 0;
}
