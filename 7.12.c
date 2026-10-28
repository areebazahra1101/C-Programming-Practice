#include<stdio.h>
#include<ctype.h>
int main()
{
float num=0.0f, total=0.0f;
char c;
printf("Enter an expression:");
scanf("%f",&total);
while((c=getchar())!='\n'){
 switch(c)
 {
  case '+':
  scanf("%f",&num);
  total+=num;
  break;
    case '-':
  scanf("%f",&num);
  total-=num;
  break;
    case '*':
  scanf("%f",&num);
  total*=num;
  break;
    case '/':
  scanf("%f",&num);
  total/=num;
  break;
    default:
        break;
 }
}
 printf("Value of expression: %.4f",total);
return 0;
}
