#include<stdio.h>
#include<ctype.h>
int main()
{
int h,m;
char c;
printf("Enter a 12-hour time:");
scanf("%d:%d %c",&h,&m,&c);
h=(h==12?0:h);// h is converted to 12
if(toupper(c)=='P') // if 12 PM or 12 AM h=0
h+=12;              // then for PM h=0+12=12:00 or for AM h=0:00
return 0;
}
