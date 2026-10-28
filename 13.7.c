#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
char *tens[]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"},
     *ones[]={"","-one","-two","-three","-four","-five","-six","-seven","-eight","-nine"},
     *teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
printf("You entered the number:");
//tens=n/10;
//ones=n%10;
if(n/10==1)
{
 printf("%s",teens[n%10]);
}
else
{
printf("%s%s",tens[n/10],ones[n%10]);
}
return 0;
}
