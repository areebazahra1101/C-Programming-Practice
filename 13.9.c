#include<stdio.h>
#include<ctype.h>
int compute_vowel_count(const char *sentence)
{
  int count=0;
  while(*sentence!='\0')
  {
   switch(toupper(*sentence))
   {
case 'A': case 'E': case 'I':case 'O': case 'U':
    count++; break;
    default: break;
   }
   sentence++;
  }

 return count;
}
int main()
{
 char sentence[200];
 printf("Enter a sentence:");
 fgets(sentence,sizeof(sentence),stdin);
 int vowel=compute_vowel_count(sentence);
 printf("Vowel=%d\n",vowel);
 return 0;
}
