#include<stdio.h>
int main()
{
char c;
int i=0;
char message[200];

printf("Enter message: ");
while((c=getchar())!='\n') //stores input in array
{
message[i]=c;
i++;
}
message[i]='\0'; //end of string
printf("In BIFF-speak: ");

for(i=0;message[i]!='\0';i++)
{
c=toupper(message[i]);
switch(c)
{
 case 'A': printf("4"); break;
 case 'B': printf("8"); break;
 case 'E': printf("3"); break;
 case 'I': printf("1"); break;
 case 'O': printf("0"); break;
 case 'S': printf("5"); break;
 default: printf("%c",c); break;
}
}
printf("!!!!!!!!!!");
return 0;
}
