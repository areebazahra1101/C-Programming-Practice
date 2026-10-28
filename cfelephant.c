#include<stdio.h>
int main()
{
 int x;
 scanf("%d",&x);
 int moves=x/5;
 if(x%5!=0)
    moves++;
 printf("%d\n",moves);
return 0;
}
