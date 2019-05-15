#include<iostream.h>
#include<conio.h>
class B;
	class A
	{
	  int meter,cm;
	  public :
	 void setdata(int x,int y)
	  {
	     meter=x;
	     cm=y;

	  }
	  friend void fun(A,B);

	};
	class B
	{
	 int feet,inches;
	 public:
	 void setdata1(int m,int n)
	 {
	   feet=m;
	   inches=n;
	 }

	 friend void fun(A,B);
	};
	void fun(A a,B b)
	{
	 cout<<"The Addition Of Meter And Feet Is ="<<a.meter+b.feet<<"\n";
	 cout<<"The Addition OfCm And Inches Is ="<<a.cm+b.inches<<"\n";

	}
void main()
{
int n1,n2,n3,n4;
clrscr();
   A a;
   B b;
   cout<<"Enter Two Numbers";
   cin >>n1>>n2;
   a.setdata(n1,n2);
   cout<<"Enter Two Numbers";
   cin>>n3>>n4;
   b.setdata1(n3,n4);
   fun(a,b);
getch();

}