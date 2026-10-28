#include<stdio.h>
#include<ctype.h>
int main()
{
int arr[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
char c;
int sum=0;
printf("Enter a word: ");
while((c=getchar())!='\n')
{
sum+=arr[toupper(c)-'A'];
}
printf("Scrabble Value: %d",sum);
return 0;
}
