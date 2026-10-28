#include<stdio.h>
int main()
{
    int i,j;
    int rowsum=0,colsum=0,majdiagsum=0,mindiagsum=0;
    int a[5][5];
    for(i=0; i<5; i++)
    {
        printf("Enter row %d: ",i+1);
        for(j=0; j<5; j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
 {
  rowsum+=a[i][j];
 }
}
for(j=0;j<5;j++)
{
 for(i=0;i<5;i++)
 {
  colsum+=a[i][j];
 }
}
for(i=0;i<5;i++)
{
        majdiagsum+=a[i][i];
        mindiagsum+=a[i][5-1-i];
}
printf("Row sum=%d, Column Sum=%d, Major Diagonal Sum=%d, Minor Diagonal Sum=%d",rowsum,colsum,majdiagsum,mindiagsum);

return 0;
}
