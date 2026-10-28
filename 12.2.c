#include<stdio.h>
#include<ctype.h>
#define N 100
int main()
{
 char c,a[N];
char *p=a,*q;
while((c=getchar())!='\n'&&p<a+N)
{
 if(isalpha(c))
 {
  *p=toupper(c);
  p++;
 }
}
p--;
for(q=a;q<p;q++,p--)
{
 if(*p!=*q)
  {printf("Not Palindrome.\n");
 return 0;
}
}
printf("Palindrome.\n");
return 0;
}
