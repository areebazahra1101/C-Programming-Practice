#include<stdio.h>
int main(){
int n;
int i;
printf("How many numbers do you want to reverse?");
scanf("%d",&n);
printf("Enter %d numbers:",n);
int a[n];

for(i=0;i<((int)sizeof(a)/sizeof(a[0]));i++)
{
scanf("%d",&a[i]);
}
printf("In reverse order:");
for(i=((int)sizeof(a)/sizeof(a[0]))-1;i>=0;i--)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
