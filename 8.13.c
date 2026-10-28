#include<stdio.h>
int main()
{
char last[20];
char c;
int i=0;
printf("Enter a name: ");
c=getchar(); //stores the first letter of first name into c
while(getchar()!=' ') ; //discards the rest of the letters of the first name
while((last[i]=getchar())!='\n') //reads the last name
{
    i++;
}
last[i]='\0';
printf("%s, %c",last,c);

return 0;
}
