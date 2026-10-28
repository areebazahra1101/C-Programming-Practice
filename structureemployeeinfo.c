#include<stdio.h>
struct employee{
char firstname[50];
char lastname[50];
float salary;
char department[50];
};
int main()
{
int n;
char ch;
printf("Enter number of employees:");
scanf("%d",&n);

struct employee e[n];

for(int i=0;i<n;i++)
{
printf("Employee %d:\n",i+1);
printf("Enter first name:");
scanf("%s",e[i].firstname);
printf("Enter last name:");
scanf("%s",e[i].lastname);
printf("Enter salary:");
scanf("%f",&e[i].salary);
printf("Enter department:");
scanf("%s",e[i].department);
}
getchar();
printf("Enter a letter:");
scanf(" %c",&ch);
for(int i=0;i<n;i++)
{
 if(e[i].firstname[0]==ch||e[i].firstname[0]==ch+32)
 {
  printf("Name: %s %s, Salary: %.2f, Department: %s\n",e[i].firstname,e[i].lastname,e[i].salary,e[i].department);
 }
}
return 0;
}
