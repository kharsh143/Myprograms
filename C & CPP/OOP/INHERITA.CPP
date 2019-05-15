#include<iostream.h>
#include<conio.h>
	class A
	{
	   public :

	   A()
	   {
	    cout<<"A\t\t\t\t";
	   }

	};

	class B
	{
	   public :
	   B()

	   {
	    cout<<"\t\t\t\tB"<<endl;
	   }


	};
	class C : public A,public B
  {
	  public :
	  C()
	  {
	  cout<<"\n\n\n\n\n";
	    cout<<"\t\t\t\tC";
	  }



	};
void main()
{
clrscr();
cout<<"\nExample Of Mutiple Inheritance\n";
 C c1;

getch();
}
