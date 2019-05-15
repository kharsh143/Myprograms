#include<iostream.h>
#include<conio.h>
	class Harsh
	{
	   protected :
	   int a;



	};

	class Harsha :protected Harsh
	{
	   public :
	   void set()
	   {
	   cout<<"Enter The Number";
	   cin>>a;
	   cout<<"A="<<a;

	   }

	};
	class Add : public Harsha
	{
	  public :
	  void show()
	  {
	   cout<<a;
	  }


	};
void main()
{
clrscr();
   Add h;
   h.set();
   h.show();
getch();
}
