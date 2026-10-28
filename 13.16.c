#include<stdio.h>
void reverse(char *msg)
{
 char *start=msg;
 char *end=msg;
 while(*end)
 {
  end++;
 }
 end--;
 while(start<end)
 {
   char temp=*start;
   *start=*end;
   *end=temp;
   start++;
   end--;
 }
}
int main()
{
 char msg[100],c;
 char *p=msg;
 while((c=getchar())!='\n'&&p<msg+99)
 {
  *p++=c;
 }
 *p='\0';

reverse(msg);

printf("The reversed string is: %s\n",msg);
return 0;
}
