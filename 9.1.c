#include<stdio.h>
void selection_sort(int a[],int n)
{
int i, max=0, temp;
if(n==1)
return;
for(i=1;i<n;i++)
{if(a[i]>a[max])
max=i;
}
temp=a[max];
a[max]=a[n-1];
a[n-1]=temp;

selection_sort(a,n-1);
}
int main(void)
{
int a[100],n,i;
printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

selection_sort(a,n);

printf("Sorted array:\n");
for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;
}
