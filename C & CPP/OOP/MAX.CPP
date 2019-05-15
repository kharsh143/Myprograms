#include<iostream.h>
#include<conio.h>
int max(int,int);
void main()
{
int x,y;
clrscr();
cout<<"enter two numbers";
cin>>x>>y;
cout<<"Maximum Number is "<<max(x,y);
getch();
}
int max(int a,int b)
{
if(a>b)
{
return a;
}
else
{
return b;
}
}

