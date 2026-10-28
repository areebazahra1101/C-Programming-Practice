#include<stdio.h>
#include<stdlib.h>
struct flight
{
    int departure;
    int arrival;
};
struct flight time[]=
{
    {480, 616}, {583, 712}, {679, 811}, {767, 900},
    {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}
};
void print_flight(struct flight f);
int main(void)
{
    int hour,minute,user_time,closest=0,i;
    printf("Enter user time(hh:mm): ");
    scanf("%d:%d",&hour,&minute);
    user_time=hour*60+minute;
    int min_diff=abs(time[0].departure-user_time);
    for(i=1; i<8; i++)
    {
        int diff=abs(time[i].departure-user_time);
        if(diff<min_diff)
        {
            min_diff=diff;
            closest=i;
        }
    }
    printf("Closest departure time is:");
    print_flight(time[closest]);
    return 0;
}
void print_flight(struct flight f)
{
    int dep_hour=f.departure/60;
    int dep_minute=f.departure%60;
    int arr_hour=f.arrival/60;
    int arr_minute=f.arrival%60;

    printf("%d:%02d, arriving at %d:%02d\n",
           dep_hour,dep_minute,
           arr_hour,arr_minute);

}
