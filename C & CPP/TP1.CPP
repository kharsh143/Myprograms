#include<stdio.h>
#include<conio.h>
#include<iostream.h>

	class Complex
	{
		private:
		int a,b;
		public:
		void set_data(int x,int y)
		{
		  a=x;
		  b=y;

		}

		void show_data()
		{
		 cout<<"A="<<a<<"B="<<b;
		 }
		 Complex  add(Complex c)
		 {
		 Complex temp;
		 temp.a=a+c.a;
		 temp.b=b+c.b;
		 return (temp);

		 }

	};


void main()
{

 int n1,n2,n3,n4;
 clrscr();
 printf("Enter Real and Imaginary Number");
 scanf("%d%d",&n1,&n2);
 printf("Enter Real and Imaginary Numbers");
 scanf("%d%d",&n3,&n4);
 Complex c1,c2,c3;
 c1.set_data(n1,n2);
 c2.set_data(n3,n4);
 c3=c1.add(c2);
 c3.show_data();
getch();

}