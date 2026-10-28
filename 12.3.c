#include<stdio.h>
#define N 100
int main()
{
 char c, a[N];
 int i=0,j=0;
 printf("Enter a message:\n");
 while(i<N && (c=getchar())!='\n')
 {
  *(a+i)=c;
  i++;
 }
 for(j=i-1;j>=0;j--)
 {
  putchar(*(a+j));
 }
   printf("\n");

return 0;
}
