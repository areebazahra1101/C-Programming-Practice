#include<stdio.h>
int main()
{
int n1;
printf("Enter the first (single) digit:");
scanf("%d",&n1);
int m1,m2,m3,m4,m5;
printf("Enter the first group of five digits:");
scanf("%1d%1d%1d%1d%1d",&m1,&m2,&m3,&m4,&m5);
int p1,p2,p3,p4,p5;
printf("Enter the second group of five digits:");
scanf("%1d%1d%1d%1d%1d",&p1,&p2,&p3,&p4,&p5);
int sum1=n1+m2+m4+p1+p3+p5;
int sum2=m1+m3+m5+p2+p4;
int mult=sum1*3+sum2;
int sub= mult-1;
int rem=sub%10;
int fin=9-rem;
printf("\nResult is: %d\n",fin);
 return 0;
}
