#include<stdio.h>
void max_min(int a[], int n, int *max, int *min,int *posmax,int *posmin)
{
 *max=*min=a[0];
 for(int i=0;i<n;i++)
 {
  if(a[i]>*max)
  {
   *max=a[i];
   *posmax=i;
  }
    if(a[i]<*min)
  {
   *min=a[i];
   *posmin=i;
  }
 }
}
int main()
{
int i,n,big,small,posmax,posmin;
printf("Enter number of terms: ");
scanf("%d",&n);
int a[n];
printf("Enter %d numbers: ",n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
max_min(a,n,&big,&small,&posmax,&posmin);
printf("Largest: %d\n",big);
printf("Smallest: %d\n",small);
printf("Position of the largest number: %d\n",posmax+1);
printf("Position of the smallest number: %d\n",posmin+1);
return 0;
}
