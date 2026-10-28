#include <stdio.h>
#include <stdlib.h>

int main()
{
float loan, yearlyrate, monthlyrate, monthlypayment, balance1, balance2, balance3;
 printf("Enter the amount of loan:");
 scanf("%f",&loan);
 printf("Enter the yearly interest rate:");
 scanf("%f",&yearlyrate);
 printf("Enter the monthly payment:");
 scanf("%f",&monthlypayment);

monthlyrate=(yearlyrate/100)/12;
balance1=loan-monthlypayment+(loan*monthlyrate);
balance2=balance1-monthlypayment+(balance1*monthlyrate);
balance3=balance2-monthlypayment+(balance2*monthlyrate);
printf("Balance remaining after first payment:%.2f\n",balance1);
printf("Balance remaining after second payment:%.2f\n",balance2);
printf("Balance remaining after third payment:%.2f\n",balance3);
       return 0;
}
