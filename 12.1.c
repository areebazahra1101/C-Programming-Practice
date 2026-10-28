#include<stdio.h>
#define N 100
int main()
{
 char a[N],c,*p=a;
 while((c=getchar())!='\n' && p<a+N)
 {
     *p++=c;
 }
 while(p>a)
     {
       putchar(*--p);
     }
     printf("\n");
return 0;
}
