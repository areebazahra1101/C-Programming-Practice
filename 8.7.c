#include<stdio.h>
int main()
{
 int arr[5][5];
 int i,j;
 int rowsum=0,colsum=0;
 for(i=0;i<5;i++)
{
     printf("Enter row %d: ",i+1);
    for(j=0;j<5;j++)
    {
      scanf("%d",&arr[i][j]);
    }
}
printf("Row sum: ");
 for(i=0;i<5;i++)
{
    rowsum=0;
    for(j=0;j<5;j++)
    {
      rowsum+=arr[i][j];
    }
    printf("%d ",rowsum);
}
printf("\nColumn sum: ");
  for(j=0;j<5;j++)
{
    colsum=0;
    for(i=0;i<5;i++)
    {
      colsum+=arr[i][j];
    }
     printf("%d ",colsum);
}
return 0;
}
