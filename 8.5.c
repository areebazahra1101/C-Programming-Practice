#include<stdio.h>
#define N 5
#define balance 100.0
int main()
{
 int i,j,rate,years,year;
 double value[N];
 double mrate;
 printf("Enter interest rate:");
 scanf("%d",&rate);
 printf("Enter no. of years:");
 scanf("%d",&years);
 printf("\nYears");
 for(i=0;i<N;i++)
 {
  printf("%7d%%",rate+i);
  value[i]=balance;
 }
 printf("\n");
 for(year=1;year<=years;year++)
 {
     printf("%3d  ",year);
     for(i=0;i<N;i++)
     {
         mrate=(rate+i)/100.0/12.0;
         for(j=0;j<12;j++)
         {
             value[i]+=value[i]*mrate;
         }
         printf("%7.2f   ",value[i]);
     }
     printf("\n");
 }
return 0;
}
