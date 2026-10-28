#include <stdio.h>

int main()
{
int n1,n2,d1,d2,num,den;
char op;
printf("Enter two fractions separated by an operand:");
scanf("%d/%d%c%d/%d",&n1,&d1,&op,&n2,&d2);
switch(op)
 {
  case '+':
  num=n1*d2+n2*d1;
  den=d1*d2;
  break;
  case '-':
  num=n1*d2-n2*d1;
  den=d1*d2;
  break;
  case '*':
  num=n1*n2;
  den=d1*d2;
  break;
  case '/':
  num=n1*d2;
  den=d1*n2;
  break;
  deafult:
  break;
 }
printf("Result=%d/%d",num,den);
return 0;
}
