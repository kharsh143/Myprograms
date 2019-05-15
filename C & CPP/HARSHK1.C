#include<stdio.h>
#include<conio.h>
struct student{
       char name[20];
       int rollno;
       char surname[20];
       };
void main()
{
  struct student harsh={
  "Harsh",
  76,
  "Kairamkonda"
	};
	clrscr();
  printf("%s\n %d \n %s\n",harsh.name,harsh.rollno,harsh.surname);
  getch();
}