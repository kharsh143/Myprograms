/* Swap Nubers*/
#include<iostream.h>
#include<conio.h>
int swap(int *x, int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
cout<<"A="<<*x<<"\n"<<"B="<<*y;
}

void main()
{

 int a=10,b=20;
 clrscr();
 swap(&a,&b);
 getch();
}