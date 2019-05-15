#include<stdio.h>
#include<conio.h>
struct emp
{
int eno;
char ename[20];
float esal;
};
void main()
{
char* cp;
int* ip;
struct emp* sep;
clrscr();
printf("size of char* is:%d\n",sizeof(cp));
printf("size of int* is :%d\n",sizeof(ip));
printf("size of emp* is :%d\n",sizeof(sep));
getch();
}