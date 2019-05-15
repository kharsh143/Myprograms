#include<iostream.h>
#include<conio.h>
   class Harsh
   {
     public :
     static int count;
    static  void fun()

     {
       cout<<"\nThis is "<<count+1<<"object";

	count++;

     }

     void display()

     {
	cout<<"\nTotal Objectives are"<<count;
     }
   };
   int Harsh::count;

void main()
{
clrscr();
  Harsh h1,h2,h3;
  h1.fun();
  h2.fun();
  h3.fun();
  h1.display();

getch();

}