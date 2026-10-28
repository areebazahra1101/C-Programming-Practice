#include<stdio.h>
int main()
{
 int hour, minute;
 printf("Enter a 24-hour time:");
 scanf("%d:%d",&hour,&minute);
 if(hour<0||hour>23||minute<0||minute>59)
   {
   printf("Error");
   }
 else if(hour==12)
 {
  printf("Equivalent 12-hour time: 12:%02d PM\n",minute);
 }
 else if(hour==0)
 {
  printf("Equivalent 12-hour time: 12:%02d AM\n",minute);
 }
 else if(hour<12 && hour!=0)
 {
  printf("Equivalent 12-hour time: %d:%02d AM\n",hour,minute);
 }
 else
 {
  printf("Equivalent 12-hour time: %d:%02d PM\n",hour-12,minute);
 }

return 0;
}
