#include<iostream.h>
#include<conio.h>
	class Human
	{
	   public :
	   Human()
	   {
	     cout<<"This Is Constructor\n";
	   }

	   ~Human()
	   {
	    cout<<"This Is Destructor\n";
	   }

	};

void main()
{
clrscr();
     Human * harsh;
    harsh =new Human;
    delete harsh;
getch();
}