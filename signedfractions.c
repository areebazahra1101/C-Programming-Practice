#include<stdio.h>
int main()
{
int n1,n2,d1,d2;
printf("Enter the first fraction:");
scanf("%d/%d",&n1,&d1);
printf("Enter the second fraction:");
scanf("%d/%d",&n2,&d2);
int nsum=n1*d2+n2*d1;
int dsum=d1*d2;
printf("The sum is: %d/%d\n",nsum,dsum);
 return 0;
}
