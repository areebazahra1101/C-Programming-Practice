#include<stdio.h>
int main()
{
int i=0;
char c,punc='\0';
char arr[100];
printf("Enter a sentence: ");
while((c=getchar())!='\n')
{
if(c=='.'||c=='?'||c=='!')
{
  punc=c;
  break; //stores the punctuation in c
}
arr[i++]=c; //stores the rest of the part in the array
}
arr[i]='\0';

printf("Reversal of a sentence: ");
while(i>0)
{
int start=i-1;
while(start>0&&arr[start-1]!=' ')
{
start--;
}
for(int j=start;j<i;j++)
{
    putchar(arr[j]);
}
if(start>0)
    printf(" ");
i=start-1;
}
putchar(punc);
return 0;
}
