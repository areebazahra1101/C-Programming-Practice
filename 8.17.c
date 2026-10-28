#include<stdio.h>
int main()
{
int n,i=0,j=0;
printf("Enter size of magic square: ");
scanf("%d",&n);
int a[n][n];
if(n%2==0){printf("Magic square is not possible for even numbers");}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
     a[i][j]=0;
    }
}
int row=0;
int col=n/2;
int num=1;
while(num<=n*n)
{
 a[row][col]=num;
 num++;
 int row1=(row-1+n)%n;
 int col1=(col+1)%n;
 if(a[row1][col1]!=0)
 {
  row=(row+1)%n;
 }
 else
 {
     row=row1;
     col=col1;
 }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%4d",a[i][j]);
    }
    printf("\n");
}
return 0;
}
