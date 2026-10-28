#include<stdio.h>
#include<ctype.h>
int main()
{
float length=0.0f,word=1.0f;
char c;
printf("Enter a sentence:");
while((c=getchar())!='\n')
{
 if(c==' ')
        word++;
 else
    length++;
}
printf("Average word length:%.2f",length/word);
return 0;
}
