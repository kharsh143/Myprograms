#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[10];
};
void func(int a, char ch[10]);
void main()
{
struct student s={10176,"Harsh"};
func(s.rollno,s.name);
getch();
}