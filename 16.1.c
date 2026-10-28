#include<stdio.h>
struct country
{
char name[30];
int code;
};
int main(){
struct country country_codes[]={
       {"Argentina", 54},
        {"Bangladesh", 880},
        {"Brazil", 55},
        {"Burma", 95},
        {"China", 86},
        {"Columbia", 57},
        {"Congo, Dem. Rep. of", 243},
        {"Egypt", 20},
        {"Ethiopia", 251},
        {"France", 33},
        {"Germany", 49},
        {"India", 91},
        {"Indonesia", 62},
        {"Iran", 98},
        {"Italy", 39},
        {"Japan", 81},
        {"Mexico", 52},
        {"Nigeria", 234},
        {"Pakistan", 92},
        {"Philippines", 63},
        {"Poland", 48},
        {"Russia", 7},
        {"South Africa", 27},
        {"South Korea", 82},
        {"Spain", 34},
        {"Sudan", 249},
        {"Thailand", 66},
        {"Turkey", 90},
        {"Ukraine", 380},
        {"United Kingdom", 44},
        {"United States", 1},
        {"Vietnam", 84}
};
int code;
int i;
int found=0;
printf("Enter the code:");
scanf("%d",&code);
for(i=0;i<32;i++)
{
if(code==country_codes[i].code){
printf("Country: %s\n",country_codes[i].name);
found=1;
break;}
}
if(!found)
{
 printf("Invalid input.\n");
 }
return 0;
}
