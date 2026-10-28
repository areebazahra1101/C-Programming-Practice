/*#include<stdio.h>
int main()
{
   int n,row,col,value=1;
   printf("Enter n:");
   scanf("%d",&n);
   for(row=1;row<=n;row++)
   {
       value=1;
    for(col=1;col<=(n-row);col++)
    {
     printf(" ");
    }
    for(col=1;col<=row;col++)
    {
    if(col==row||col==1)
    {
        printf("1 ");
    }
    else
    {
     value=value*(row-col+1)/(col-1);
    printf("%d ",value);
    }
    }
    printf("\n");
   }
   return 0;
}*/

 /*#include<stdio.h>
int main()
{
 int h,l,r,gcd;
 printf("Enter the two numbers in descending order:");
 scanf("%d %d",&h,&l);
 while(h%l!=0)
 {
  r=h%l;
  h=l;
  l=r;
 }
 gcd=l;
 printf("%d is the GCD",gcd);
return 0;
}*/
#include <stdio.h>

int main() {
    int i, j;
    int n;

    printf("Enter the number of rows for the tree top: ");
    scanf("%d", &n);  // e.g., 5 for the top pyramid

    // Top pyramid
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Trunk (rectangle)
    for(i = 1; i <= n; i++) {      // n rows
        // Center the trunk
        for(j = 1; j <= n - n/2 - 1; j++) {  // spaces
            printf(" ");
        }
        for(j = 1; j <= n; j++) {   // n stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

