#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
bool is_palindrome(const char *msg)
{
 const char *start=msg;
 const char *end=msg;
 while(*end)
 {
  end++;
 }
 end--;
 while(start<end)
 {
  if(*start!=*end)
  {
   return false;
  }
  start++;
  end--;
 }
 return true;
}
int main()
{
char c, msg[100];
char *p=msg;
while((c=getchar())!='\n'&&p<msg+99)
{
    if(isalpha(c)){
 *p++=toupper(c);}
}
*p='\0';
if(is_palindrome(msg))
{
    printf("Palindrome.\n");
}
else
{
 printf("Not Palindrome.\n");
}
return 0;
}
