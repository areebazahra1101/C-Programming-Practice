#include<stdio.h>
#include<math.h>
int main()
{
float u,v,a;
printf("Enter Initial Velocity:");
scanf("%f",&u);
printf("Enter Final Velocity:\n");
scanf("%f",&v);
printf("Enter acceleration:\n");
scanf("%f",&a);
float t=(v-u)/a;
float s=u*t+0.5*a*pow(t,2);
printf("s: %.5f\n",s);
printf("t: %.5f\n",t);
return 0;
}
