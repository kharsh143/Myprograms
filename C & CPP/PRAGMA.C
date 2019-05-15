#include<stdio.h>
#include<conio.h>
void fun1();
void fun2();
#pragma startup fun2
#pragma exit fun1


void main()
{
// clrscr();
 printf("\nInside Main");
 getch();
}
void fun1()
{
 printf("\nInside Fun1");

}
void fun2()
{
 printf("\nInside Fun2");

}