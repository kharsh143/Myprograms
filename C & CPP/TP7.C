#include<stdio.h>
#include<conio.h>
void func (int *a)
{
printf("%d",*a);
}
void main()
{
int ar[]={1,2,3,4,5,6},i;
clrscr();

for(i=0;i<5;i++)
{
func(&ar[i]);
}
getch();
}