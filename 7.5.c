#include<stdio.h>
#include<ctype.h>
int main()
{
 char c;
 int sum=0;
 printf("Enter a word:");
while((c=getchar())!='\n')
{
switch(toupper(c))
{
case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
sum++; break;
case 'D': case 'G':
sum+=2; break;
case 'B': case 'C': case 'M': case 'P':
sum+=3; break;
default: break;
}
}
printf("Scrabble value: %d\n",sum);
return 0;
}
