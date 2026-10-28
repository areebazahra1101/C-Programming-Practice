#include<stdio.h>
 int main()
 {
  int item;
  int day, month, year;
  float price;
  printf("Enter the item number:");
  scanf("%d",&item);
  printf("Enter the unit price:");
  scanf("%f",&price);
  printf("Enter the purchase date(mm/dd/yyyy):");
  scanf("%d/%d/%d",&month,&day,&year);

  printf("\nItem\tUnit Price\tPurchase Date");
  printf("\n%d\t%.2f\t\t%d/%d/%d\n",item,price,month,day,year);
  return 0;

 }
