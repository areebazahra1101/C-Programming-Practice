#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--){

 int n;
 scanf("%d",&n);
 if(n%3==0){printf("0\n");}
else {
 int a=n%3;

 printf("%d\n",3-a);
}
}

return 0;
}
