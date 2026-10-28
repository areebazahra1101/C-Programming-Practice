#include<stdio.h>
int main()
{
 int i=0,n;
 char c;
 char a[80];
 printf("Enter a message to be encrypted: ");
 while(i<80&&(c=getchar())!='\n')
 {
     a[i++]=c;
 }
 a[i]='\0';
 printf("Enter shift amount(1-25): ");
 scanf("%d",&n);
 printf("Encrypted message: ");
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]>='A'&&a[i]<='Z')
       {
        a[i]=((a[i]-'A')+n)%26+'A';
       }
   else if(a[i]>='a'&&a[i]<='z')
       {
        a[i]=((a[i]-'a')+n)%26+'a';
       }
       printf("%c",a[i]);
 }
 printf("\n");
return 0;
}
