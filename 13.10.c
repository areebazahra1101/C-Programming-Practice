#include<stdio.h>
#include<ctype.h>
#include<string.h>
void reverse_name(char *name)
{
 char *p=name,initial;
 while(*p==' '){p++;} //skips initial whitespace
 initial=*p++; //stores the initial letter of the first name
 while(*p&&*p!=' '){p++;} //skips rest of the first name
 while(*p&&*p!='\n'){putchar(*p++);} //prints the last name
 printf(", %c.\n",initial);
}
int main()
{
 char name[81];
 printf("Enter a first name and a last name:");
 fgets(name,sizeof(name),stdin);
 reverse_name(name);
return 0;
}
