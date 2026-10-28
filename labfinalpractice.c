#include<stdio.h>
struct fraction{
int num;
int den;
};
int gcd(int l,int h)
{
 int r;
 while(h%l!=0)
 {
  r=h%l;
  h=l;
  l=r;
 }
 return l;
}

struct fraction add(struct fraction f1,struct fraction f2)
{
 struct fraction res;
 res.num=f1.num*f2.den+f2.num*f1.den;
 res.den=f1.den*f2.den;
 int g=gcd(res.num,res.den);
 res.num/=g;
 res.den/=g;
 return res;
}
int main()
{
 struct fraction f1,f2,result;
 printf("Enter the fractions:");
 scanf("%d/%d+%d/%d",&f1.num,&f1.den,&f2.num,&f2.den);
 result=add(f1,f2);
 printf("Simplified fraction is:%d/%d",result.num,result.den);
return 0;
}
