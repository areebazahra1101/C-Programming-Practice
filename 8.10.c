#include<stdio.h>
#include<stdlib.h>
int main()
{
int hour,minute,time;
int i,closest=0;
int dep[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
int arr[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
printf("Enter a 24-hour time: ");
scanf("%d:%d",&hour,&minute);
time=hour*60+minute;
for(i=1;i<8;i++)
{
if(abs(time-dep[i])<abs(time-dep[closest]))
{
closest=i;
}
}
printf("Closest departure time is %d:%02d, arriving at %d:%02d",
    dep[closest]/60,dep[closest]%60,
    arr[closest]/60,arr[closest]%60);
return 0;
}
