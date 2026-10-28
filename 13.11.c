#include<stdio.h>
#include<ctype.h>
double compute_average_word_length(const char *sentence)
{
 int letter=0,word=0;
 while(*sentence)
 {
  while(*sentence&&isspace(*sentence))
  {
   sentence++; //skips spaces
  }
  if(*sentence=='\0')
    break;
  word++;
  while(*sentence&&!isspace(*sentence))
  {
      letter++;
      sentence++;
  }
 }
  if(word==0.0)
        return 0;
return (double)letter/word;
}
int main()
{
 char sentence[200];
 printf("Enter a sentence:");
 fgets(sentence,sizeof(sentence),stdin);
 double avg=compute_average_word_length(sentence);
 printf("Average word length:%.1f",avg);

return 0;
}
