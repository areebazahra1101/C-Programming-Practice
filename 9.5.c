#include<stdio.h>
void create_magic_square(int a[99][99],int n)
{
int i,j,row,col;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    a[i][j]=0;
}
}
row=0;
col=n/2;
int num=1;
while(num<=n*n){
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
col=col1;;
}
}
}
void print_magic_square(int a[99][99],int n)
{
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%4d",a[i][j]);
    }
    printf("\n");
}
}
int main(void){
int n;
int a[99][99];
printf("Enter n:");
scanf("%d",&n);
if(n<1||n>99||n%2==0){
    printf("Invalid input");
return 0;}
create_magic_square(a,n);
print_magic_square(a,n);
return 0;
}
