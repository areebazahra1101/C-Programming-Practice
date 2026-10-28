#include<stdio.h>
#include<string.h>
int main()
{
 char num[4];
 printf("Enter a three-digit number:");
 scanf("%s",num);
 printf("Reversed number: %c%c%c\n",num[2],num[1],num[0]);

return 0;
}
