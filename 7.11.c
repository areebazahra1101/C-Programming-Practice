#include<stdio.h>
#include<ctype.h>
int main()
{
 char c,initial;
 printf("Enter a first name and a last name:");
 scanf("%c",&initial);
 while((c=getchar())!=' ') ; //skips rest of the character except the first initial
 while((c=getchar())==' ') ; //skips spaces
 do{
    putchar(c);
 }
 while((c=getchar())!='\n' && c!=' ');
 printf(", %c",initial);
return 0;
}
