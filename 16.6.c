#include<stdio.h>
struct date{
int day;
int month;
int year;
};

int convert_date(struct date d)
{
return d.year*365+d.month*30+d.day;
}

int compare_date(struct date d1, struct date d2)
{
int n1=convert_date(d1);
int n2=convert_date(d2);

if(n1<n2)
return 1; //1st date earlier
else if(n1>n2)
return -1; // 2nd date earlier
else
return 0; //both dates are same
}

int main(void)
{
struct date d1,d2;
printf("Enter 1st date:");
scanf("%d/%d/%d",&d1.month,&d1.day,&d1.year);

printf("Enter 2nd date:");
scanf("%d/%d/%d",&d2.month,&d2.day,&d2.year);

int result=compare_date(d1,d2);

if(result==1)
printf("First date %d/%d/%d is earlier than Second date %d/%d/%d.\n",d1.month,d1.day,d1.year,d2.month,d2.day,d2.year);
else if(result==-1)
printf("Second date %d/%d/%d is earlier than First date %d/%d/%d.\n",d2.month,d2.day,d2.year,d1.month,d1.day,d1.year);
else
printf("Both dates are same.\n");
return 0;
}
