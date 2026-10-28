#include<stdio.h>
int main()
{
char name1[50],name2[50];

fgets(name1,sizeof(name1),stdin);
fgets(name2,sizeof(name2),stdin);

char *f1=&name1[0];
char *l1=&name1[0];
char *f2=&name2[0];
char *l2=&name2[0];

while(*l1&&*l1!=' '){l1++;}
if(*l1==' '){l1++;}

while(*l2&&*l2!=' '){l2++;}
if(*l2==' '){l2++;}

printf("%c. %s",*f2,l1);
printf("%c. %s",*f1,l2);
return 0;
}
