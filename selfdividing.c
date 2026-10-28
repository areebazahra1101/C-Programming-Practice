#include<stdio.h>
int is_self_dividing(int num)
{
 int temp=num;
 while(temp>0)
{
 int digit=temp%10;
 if(digit==0||num%digit!=0)
 return 0;
 temp/=10;
}
 return 1;
}

int main()
{
 int left,right;
 printf("Enter range: ");
 scanf("%d,%d",&left,&right);

for(int i=left;i<=right;i++)
{
 if(is_self_dividing(i))
  {
   printf("%d ",i);
  }
}
return 0;
}
