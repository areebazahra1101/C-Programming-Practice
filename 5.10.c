#include<stdio.h>
int main()
{
 int grade,tens;
 printf("Enter a grade:");
 scanf("%d",&grade);
 tens=grade/10;
 switch(tens)
 {
 case 10:
 case 9:
 printf("A\n");
 break;
 case 8:
 printf("B\n");
 break;
 case 7:
 printf("C\n");
 break;
 case 6:
 printf("D\n");
 break;
 default:
 printf("F\n");
 }

return 0;
}
