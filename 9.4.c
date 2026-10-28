#include<stdio.h>
#include<ctype.h>
void read_word(int count[26]){
int c;
while((c=getchar())!='\n')
{
    if(isalpha(c))
 count[toupper(c)-'A']++;
}
}
int equal_array(int c1[26],int c2[26])
{
int i;
for(i=0;i<26;i++)
if(c1[i]!=c2[i])
return 0;
return 1;
}
int main(void)
{
   int c1[26]={0},c2[26]={0};
printf("Enter first word:");
read_word(c1);
printf("Enter second word:");
read_word(c2);

 if(equal_array(c1,c2))
        printf("The words are anagrams.\n");
 else
    printf("The words are not anagrams.\n");
 return 0;
}
