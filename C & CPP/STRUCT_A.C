#include<stdio.h>
#include<conio.h>
#define size 2
  struct student
   {
     int roll;
     char name[10];
     int marks[5];
   };
void main()
{
struct student s1[size];
int i,j,sum=0,total[size];
clrscr();
  for(i=0;i<size;i++)
  {
  printf("Enter names & rollno\n");
  scanf("%s%d",s1[i].name,&s1[i].roll);
  printf("Enter The Marks");
	 for(j=0;j<5;j++)
	 {
	   scanf("%d",&s1[i].marks[j]);
	   sum=sum+s1[i].marks[j];
	   total[i]=sum;

	 }
	 sum=0;
  }
  clrscr();
printf("Name\tRollno\tAverage:\n");
printf("**********************************\n");
   for(i=0;i<size;i++)
    {
     printf("%s\t%d\t%d\n",s1[i].name,s1[i].roll,(total[i]/5));
    }
   getch();
}
