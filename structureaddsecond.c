#include<stdio.h>
struct time
{
int hour;
int minute;
int second;
};

struct time addsecond(struct time t)
{
t.second++;

if(t.second>=60)
{
t.second=0;
t.minute++;
if(t.minute>=60)
{
t.minute=0;
t.hour++;
if(t.hour>=24)
{
t.hour=0;
}
}
}
return t;
}
int main()
{
struct time t;
printf("Enter time (hh:mm:ss): ");
scanf("%d:%d:%d",&t.hour,&t.minute,&t.second);
t=addsecond(t);
printf("Updated time is: %02d:%02d:%02d\n",t.hour,t.minute,t.second);
return 0;
}
