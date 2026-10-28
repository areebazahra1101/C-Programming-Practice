#include<stdio.h>
int main()
{
int time, hour, minute;
printf("Enter a 24-hour time:");
scanf("%d:%d",&hour,&minute);
time=hour*60+minute;
if(time<=(480+583)/2){printf("Closest departure time is 8:00 AM and arrival time is 10:16 AM\n");}
else if(time<=(583+679)/2){printf("Closest departure time is 9:43 AM and arrival time is 11:52 AM\n");}
else if(time<=(679+767)/2){printf("Closest departure time is 11:19 AM and arrival time is 1:31 PM\n");}
else if(time<=(767+840)/2){printf("Closest departure time is 12:47 PM and arrival time is 3:00 PM\n");}
else if(time<=(840+900)/2){printf("Closest departure time is 2:00 PM and arrival time is 4:08 PM\n");}
else if(time<=(900+1140)/2){printf("Closest departure time is 3:45 PM and arrival time is 5:55 PM\n");}
else if(time<=(1140+1305)/2){printf("Closest departure time is 7:00 PM and arrival time is 9:20 PM\n");}
else {printf("Closest departure time is 9:45 PM and arrival time is 11:58 PM\n");}
return 0;
}
