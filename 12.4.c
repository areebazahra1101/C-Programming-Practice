#include<stdio.h>
#include<ctype.h>
#define N 100
int main()
{
char c,a[N];
int i=0;
printf("Enter a message: ");
while((c=getchar())!='\n'&&i<N)
{
if(isalpha(c))
{
*(a+i)=c;
i++;
}
}
int start=0,end=i-1;
while(start>end)
{
if(*(a+start)!=*(a+end))
 {
 printf("Not palindrome.\n");
 return 0;
 }
 start++;
 end--;
}
printf("Palindrome.\n");
return 0;
}
