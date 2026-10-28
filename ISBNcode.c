#include<stdio.h>
int main()
{
 int gs1, identifier, code, item, check;
 printf("Enter ISBN:");
 scanf("%d-%d-%d-%d-%d",&gs1,&identifier,&code,&item,&check);
 printf("\nGS1 prefix: %d\n",gs1);
 printf("Group Identifier:%d\n",identifier);
 printf("Publisher code:%d\n",code);
 printf("Item number:%d\n",item);
 printf("Check digit:%d\nss",check);
 return 0;
}
