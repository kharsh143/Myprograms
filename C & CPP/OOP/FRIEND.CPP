#include<iostream.h>
#include<conio.h>
class A;

	class B
	{
	   int b;
	   public:
	   void getvalue(int x)
	   {
	     b=x;
	     cout<<"The Value Of B Is "<<b<<endl;
	   }
	   friend void add(A,B);

	};
	class A
	{
	   int a;
	   public :
	   void getvalue(int y)
	   {
	     a=y;
	   cout<<" The Value Of A is"<<a<<endl;
	   }
	   friend void  add(A,B);

	};
	void add(A obj1,B obj2)
	{
	  cout<<"The Addition is"<<obj1.a+obj2.b;


	}
void main()
{
   clrscr();
   A a;
   B b;
   a.getvalue(5);
   b.getvalue(15);
   add(a,b);
   getch();


}