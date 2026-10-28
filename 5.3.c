#include<stdio.h>
int main()
{
int share;
float trxn,comrate,rival_comrate,ppshare;
printf("Enter number of share:");
scanf("%d",&share);
printf("Enter price per share:");
scanf("%f",&ppshare);
trxn=share*ppshare;
if(trxn<2500)
{
 comrate=30+(1.7/100)*trxn;
}
else if(trxn<6250)
{
 comrate=56+(0.66/100)*trxn;
}
else if(trxn<20000)
{
comrate=76+(0.34/100)*trxn;
}
else if(trxn<50000)
{
comrate=100+(0.22/100)*trxn;
}
else if(trxn<500000)
{
comrate=155+(0.11/100)*trxn;
}
else
{
 comrate=255+(0.09/100)*trxn;
}
if(comrate<39)
{
comrate=39;
}
if(share<2000)
{
 rival_comrate=33+share*0.03;
}
else
{
 rival_comrate=33+share*0.02;
}

printf("Commission:%.2f\n",comrate);
printf("Broker Commission:%.2f\n",rival_comrate);
return 0;
}
