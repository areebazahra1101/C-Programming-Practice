/*
a. names and marks were removed from parameters because one structure keeps them together and enables easy access.
b. wrong array cannot be called as one call ensures simultaneous names and marks but wrong student list can be called by passing the wrong struct.
c. it is a problem and can be prevented using classes.
*/
#include<stdio.h>
#include<string.h>

#define MAX 50
#define NLEN 50

typedef struct {
char name [ NLEN ];
int mark ;
} Student ;

/*
* Every function now takes ONE array of Students
* instead of two separate arrays .
* Compare each signature carefully with Task 1.
*/

void add ( Student list [] , int * count ,
const char * name , int mark )
{
  if(*count>=MAX) return;
  strcpy(list[*count].name,name);
  list[*count].mark=mark;
  (*count)++;
}

void removeAt ( Student list [] , int * count , int index )
{
    if(index<0||index>=*count) return;
    for(int i=index;i<*count-1;i++)
    {
     list[i]=list[i+1];
    }
    (*count)--;
}

void update ( Student list [] , int count ,
int index , int newMark )
{
     if(index<0||index>=count) return;
     list[index].mark=newMark;
}

void display ( Student list [] , int count )
{
    for(int i=0;i<count;i++)
    {
        printf("%d.%s: %d\n",i+1,list[i].name,list[i].mark);
    }
}

int search ( Student list [] , int count , const char * query )
{
    for(int i=0;i<count;i++)
        if(strcmp(list[i].name,query)==0){
        printf("%s",list[i].name);
    return i+1;}
    return -1;
}

void topN ( Student list [] , int count , int n ){
Student temp[MAX];
for(int i=0;i<count;i++){temp[i]=list[i];}
for(int i=0;i<count-1;i++){
    for(int j=1;j<count-i;j++){
        if(temp[j-1].mark<temp[j].mark){
            Student t=temp[j-1];
            temp[j-1]=temp[j];
            temp[j]=t;
        }
    }
}
for(int i=0;i<n&&i<count;i++){
    printf("%s-%d\n",temp[i].name,temp[i].mark);
}

}

/* ---- implement each function below ---- */

int main ( void ) {
Student list [ MAX ];
int count = 0;

/* test your functions here */
add(list,&count,"XYZ",95);
add(list,&count,"LMNOP",80);
add(list,&count,"ABC",85);

printf("INITIAL LIST:\n");
display(list,count);

update(list,count,1,88);
printf("\nAFTER UPDATING:\n");
display(list,count);

int position= search(list,count,"LMNOP");
printf("\nFOUND AT INDEX %d\n",position);

removeAt(list,&count,0);
printf("\nAFTER REMOVING:\n");
display(list,count);

printf("\nTOP STUDENTS:\n");
topN(list,count,2);
return 0;
}
