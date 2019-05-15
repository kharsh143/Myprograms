#include<iostream.h>
#include<conio.h>
	class test
	{
	  int a,b;
	  public :
	  void set(int a,int b)
	  {
	  this->a=a;
	  this->b=b;
	  }
	  void show()
	  {
//	     cout<<"A="<<a<<"B="<<b<<"\n";
	     cout<<"The Address Of Object:"<<this<<"\n";
	  }

	};
void main()
{
   test t,t1,t2,t3,t4,t5,t6,t7,t8;
   clrscr();
   t.set(10,20);
   t.show();
   t1.show();
   t2.show();
   t3.show();
   t4.show();
   t5.show();
   t6.show();
   t7.show();
   t8.show();

   getch();

}