#include<stdio.h>
int main()
{
/*printf("%6d %4d",86,1040);
printf("%12.5e",30.253);
printf("%.4f",83.162);
printf("%-6.2g",.0000009979);*/

/*int a=112,b,c;
b=10;
c=a/100;
a%=10;
b+=a;
b=b+c;
printf("Thirteen:%d",b);*/

/*int i;
float x,y;
scanf("%f%d%f",&x,&i,&y);
printf("%f %d %f",x,i,y);*/

//int i=2,j;
//printf("%d\n",i++ - j++ + --k);
//j=i*i++;
//printf("%d %d",i,j);

/*float a,b;
scanf("%f %f",&a,&b);
printf("%.3f",a+b);*/
/*int a=1,b=0,c=0;
if((b=10)&&a<b)
{
 printf("True");
}
else
{
 printf("False");
}*/
int x1,y1,x2,y2;
scanf("(%d,%d) (%d,%d)",&x1,&y1,&x2,&y2);
int z1=abs(x1-x2);
int z2=abs(y1-y2);
printf("%d\n",z1+z2);


return 0;
}
