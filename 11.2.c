#include<stdio.h>
#include<stdlib.h>
void find_closest_flight(int desired_time,int *departure_time,int *arrival_time)
{
 int i,closest=0;
int dep[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
int arr[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

 for(i=1;i<8;i++)
 {
  if(abs(desired_time-dep[i])<abs(desired_time-dep[closest]))
        closest=i;
 }
  *departure_time=dep[closest];
  *arrival_time=arr[closest];

}
int main()
{
  int time, hour, minute, departure_time, arrival_time;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d",&hour,&minute);
  time=hour*60+minute;

find_closest_flight(time,&departure_time,&arrival_time);

char c1 = departure_time < 720 ? 'a' : 'p';
char c2 = arrival_time < 720 ? 'a' : 'p';

int departure=departure_time/60;
departure=departure%12==0?12:departure%12;
int arrival=arrival_time/60;
arrival=arrival%12==0?12:arrival%12;

printf("Closest departure time is %d:%02d %cm, arriving at %d:%02d %cm",
       departure,departure_time%60,c1,
       arrival,arrival_time%60,c2);
return 0;

}
