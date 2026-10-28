#include<stdio.h>
#include<string.h>
int main()
{
 char word[21],smallword[21],largeword[21];
 printf("Enter a word:");
 scanf("%s",word);
 strcpy(smallword,word);
 strcpy(largeword,word);
 while(1)
 {
 printf("Enter a word:");
 scanf("%s",word);
 if(strlen(word)==4){break;}

 if(strcmp(word,smallword)<0)
 {
  strcpy(smallword,word);
 }
 if(strcmp(word,largeword)>0)
 {
  strcpy(largeword,word);
 }
 }
 printf("Smallest word: %s\n",smallword);
 printf("Largest word: %s\n",largeword);

return 0;
}
