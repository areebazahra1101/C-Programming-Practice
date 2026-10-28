#include<stdio.h>
#define N 10
int main(){
int i;
int repeated=0;
int digit[N]={0};
char c;
printf("Enter a number:");
while((c=getchar())!='\n'){
if(c<'0'||c>'9'){
continue;
}
c=c-'0';
digit[c]++;
}
for(i=0;i<10;i++){
if(digit[i]>1)
{
repeated++;
printf("%d is repeated %d times\n",i,digit[i]); //counts which digit is repeated how many times
}}
/*if(repeated)
printf("Repeated digit.\n");
else
printf("No repeated digit.\n");*/ //counts if repeated digit is there or not
printf("Number of repeated digit is %d",repeated); //counts hoy many repeated digits are there
return 0;
}
