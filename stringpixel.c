#include<stdio.h>
#include<string.h>
int main()
{
 char s[]="abcdefghijklmnopqrstuvwxyz";
 int widths[26];
 for(int i=0;i<26;i++)
 {
  widths[i]=10;
 }

int lines=1;
int width=0;

for(int i=0;s[i]!='\0';i++)
{
int w=widths[s[i]-'a']; //10

if(width+w>100)
{
 lines++;
 width=w;
}
else{
width+=w;}
}
printf("%d %d",lines,width);
return 0;
}

