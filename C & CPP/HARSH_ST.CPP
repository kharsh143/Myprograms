#include<stdio.h>
#include<conio.h>
struct student{
	char name[15];
	int rollno;
	int age;
	};
void main()
{
struct student harsh={
	"Harsh",
	76,
	18
	};
clrscr();
printf("%s \n %d \n %d",harsh.name,harsh.rollno,harsh.age);
getch();
}