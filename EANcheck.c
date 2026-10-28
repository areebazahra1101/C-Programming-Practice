#include<stdio.h>
int main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
printf("Enter the first 12 digits of an EAN:");
scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);
int s1=n2+n4+n6+n8+n10+n12;
int s2=n1+n3+n5+n7+n9+n11;
int mult=s1*3+s2;
int sub=mult-1;
int div=sub%10;
int fin=9-div;
printf("Check digit %d:",fin);
return 0;
}
