#include<stdio.h>
int main()
{
 int i,j;
 int arr[5][5];
 int stdtotal,quiztotal, stdhigh,stdlow;
 float stdavg,quizavg;
 for(i=0;i<5;i++)
 {
  printf("Enter marks of student %d: ",i+1);
  for(j=0;j<5;j++)
  {
      scanf("%d",&arr[i][j]);
  }
 }
 for(i=0;i<5;i++)
 {
     stdtotal=0;
     for(j=0;j<5;j++)
     {
      stdtotal+=arr[i][j];
     }
 stdavg=stdtotal/5.0;
 printf("Total marks of student %d: %d\n",i+1,stdtotal);
 printf("Average marks of student %d: %.2f\n",i+1,stdavg);
 }
 for(j=0;j<5;j++)
 {
     quiztotal=0;
     stdhigh=arr[0][j];
     stdlow=arr[0][j];
     for(i=0;i<5;i++)
     {
         quiztotal+=arr[i][j];
         if(arr[i][j]>stdhigh){stdhigh=arr[i][j];}
         if(arr[i][j]<stdlow){stdlow=arr[i][j];}
     }
     quizavg=quiztotal/5.0;
     printf("Total marks of quiz %d: %d\n",j+1,quiztotal);
     printf("Average marks of quiz %d: %.2f\n",j+1,quizavg);
     printf("Highest marks of quiz %d: %d\n",j+1,stdhigh);
     printf("Lowest marks of quiz %d: %d\n",j+1,stdlow);
 }
return 0;
}
