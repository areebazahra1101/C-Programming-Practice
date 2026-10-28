#include<stdio.h>
#include<ctype.h>
int scrabble_value(const char *word)
{
 int sum=0;
 int values[]={ 1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
        5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
        1, 4, 4, 8, 4, 10}  ;
while(*word)
{
if(isalpha(*word))
{
 sum+=values[toupper(*word++)-'A'];
}
}
return sum;
}
int main()
{
 int sum;
 char word[100];
 printf("Enter a word:");
 scanf("%s",word);
 int a=scrabble_value(word);
 printf("The scrabble value:%d",a);

return 0;
}
