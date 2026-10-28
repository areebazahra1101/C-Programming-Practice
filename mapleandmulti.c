#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
 int a,b;
 scanf("%d %d",&a,&b);
 if(a==b)
 {
 printf("0\n");
 }
 else if(a>b && a%b==0)
 {
  printf("1\n");
 }
  else if(b>a && b%a==0)
 {
  printf("1\n");
 }
 else
 {
 printf("2\n");
 }







}
return 0;
}
