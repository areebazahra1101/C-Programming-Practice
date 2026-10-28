/*
a. removeAt has 4 parameters. adding a new field called student_id would require adding another parameter to the function.
b. two shifts are needed. one is for name and another is for marks. since they are related to a single student, both shifts are needed to correspond the name with marks.
c. the code cannot detect errors. data of one student will become exchanged with another one.
*/
#include<stdio.h>
#include<string.h>

#define MAX 50
#define NLEN 50

/*
* Two parallel arrays + a count variable .
* Declare them in main () and pass them to every function .
* Do NOT make them global .
*/

void add ( char names [][ NLEN ] , int marks [] , int * count ,
const char * name , int mark )
{
 if(*count>=MAX){printf("List id full.\n");
 return;}
 strcpy(names[*count],name);
 marks[*count]=mark;
 (*count)++;
}

void removeAt ( char names [][ NLEN ] , int marks [] , int * count ,
int index )
{
    if(index<0||index>=*count) return;

   for(int i=index;i<*count-1;i++)
   {
      strcpy(names[i],names[i+1]);
      marks[i]=marks[i+1];
   }
   (*count)--;
}

void update (int marks [] , int count ,
int index , int newMark )
{
 if(index<0||index>=count) return;
 marks[index]=newMark;
}

void display ( char names [][ NLEN ] , int marks [] , int count )
{
  for(int i=0;i<count;i++)
  {
   printf("%d. %s: %d\n",i+1,names[i],marks[i]);
  }
}

int search ( char names [][ NLEN ] , int count ,
const char * query )
{
  for(int i=0;i<count;i++)
  {
   if(strcmp(names[i],query)==0){
        printf("%s\n",names[i]);
        return i+1;}
  }
  return -1;
}

void topN ( char names [][ NLEN ] , int marks [] , int count ,
int n )
{
   char namescopy[MAX][NLEN];
   int markscopy[MAX];
   for(int i=0;i<count;i++)
   {
    strcpy(namescopy[i],names[i]);
    markscopy[i]=marks[i];
   }
   for(int i=0;i<count-1;i++){
    for(int j=1;j<count-i;j++){
     if(markscopy[j-1]<markscopy[j]){
        int tempmarks=markscopy[j-1];
        markscopy[j-1]=markscopy[j];
        markscopy[j]=tempmarks;

        char temp[NLEN];
        strcpy(temp,namescopy[j-1]);
        strcpy(namescopy[j-1],namescopy[j]);
        strcpy(namescopy[j],temp);
     }
    }
   }
   for(int i=0;i<n&&i<count;i++){
    printf("%s-%d\n",namescopy[i],markscopy[i]);
   }
}

/* ---- implement each function below ---- */

int main ( void ) {
char names [ MAX ][ NLEN ];
int marks [ MAX ];
int count = 0;
/* test your functions here */
add(names,marks,&count,"XYZ",95);
add(names,marks,&count,"LMNOP",80);
add(names,marks,&count,"ABC",85);
printf("INITIAL LIST:\n");
display(names,marks,count);

update(marks,count,1,88);
printf("\nAFTER UPDATING:\n");
display(names,marks,count);
int position=search(names,count,"LMNOP");
printf("FOUND AT INDEX:%d\n",position);

removeAt(names,marks,&count,0);
printf("\nAFTER REMOVING:\n");
display(names,marks,count);

printf("\nTOP 2 STUDENTS:\n");
topN(names,marks,count,2);

return 0;
}
