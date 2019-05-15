#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{

clrscr();

printf("this function program with argument & with  return value\n");
add(45,5);

getch();

}
int add(int a,int b)
{
int sum=a+b;
printf("\nthe addition is %d");
return (sum);
}