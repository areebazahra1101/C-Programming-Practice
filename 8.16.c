#include<stdio.h>
int main()
{
char c;
char a[26]={0};
int i;
int flag=1;
printf("Enter first word: ");
while((c=getchar())!='\n')
{
  if(isalpha(c))
  a[toupper(c)-'A']++;
}
printf("Enter second word: ");
while((c=getchar())!='\n')
{
  if(isalpha(c))
  a[toupper(c)-'A']--;
}
for(i=0;i<26;i++) {
    if(a[i]!=0)
    {
    flag=0;
    break;
    }
}
if(flag)
{
printf("The words are anagrams\n");
}
else
{
printf("The words are not anagrams\n");
}
return 0;
}
