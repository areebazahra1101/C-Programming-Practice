#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
bool are_anagrams(const char *word1,const char *word2)
{
    int count[26]={0};
while(*word1)
{
 if(isalpha(*word1))
 {
   count[toupper(*word1)-'A']++;
 }
 word1++;
}
 while(*word2)
 {
  if(isalpha(*word2))
  {
   count[toupper(*word2)-'A']--;
  }
  word2++;
 }
  for(int i=0;i<26;i++)
  {
      if(count[i]!=0)
        return false;
  }
        return true;
}
int main()
{
 char word1[100],word2[100];
 printf("Enter first word:");
 fgets(word1,sizeof(word1),stdin);
 printf("Enter second word:");
 fgets(word2,sizeof(word2),stdin);
 if(are_anagrams(word1,word2))
 {
  printf("The words are anagrams\n");
 }
 else
 {
     printf("The words are not anagrams\n");
 }
return 0;
}
