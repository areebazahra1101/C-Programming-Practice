#include<stdio.h>
#include<ctype.h>
int main()
{
 char c;
 int vowel=0;
 printf("Enter a sentence:");
 while((c=getchar())!='\n')
 {
  switch(toupper(c))
  {
   case 'A': case 'E': case 'I': case 'O': case 'U':
    vowel++; break;
    default: break;
  }
 }
 printf("Vowel=%d",vowel);
return 0;
}
