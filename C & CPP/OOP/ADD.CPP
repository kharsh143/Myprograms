#include<stdio.h>
#include<conio.h>
#include<iostream.h>

  class Complex
  {
  private :
  int a,b;
  public :
	   void set_data(int x,int y)
	   {
	   a=x;
	   b=y;
	   }
	   void show_data()
	   {
	   cout<<"a="<<a<<"\tb="<<b<<"\n";
	   }

	   Complex add(Complex c)
	   {
	   Complex temp;
	   temp.a=a+c.a;
	   temp.b=b+c.b;
	   return(temp);
	   }


	   Complex sub(Complex c)
	   {
	   Complex temp;
	   temp.a=a-c.a;
	   temp.b=b-c.b;
	   return(temp);
	   }

	   Complex mul(Complex c)
	   {
	   Complex temp;
	   temp.a=a*c.a;
	   temp.b=b*c.b;
	   return(temp);
	   }

	   Complex div(Complex c)
	   {
	   Complex temp;
	   temp.a=a/c.a;
	   temp.b=b/c.b;
	   return(temp);
	   }
  };
void main()
{
int n1,n2,n3,n4;
clrscr();
printf("Enter The two Numbers");
scanf("%d%d",&n1,&n2);
printf("Enter The Two Numbers");
scanf("%d%d",&n3,&n4);
printf("\n1.Add\t2.Subtract\t3.Multiplication\t4.Division\n");
Complex c1,c2,c3;

	c1.set_data(n1,n2);
	c2.set_data(n3,n4);
	c3=c1.add(c2);
	c3.show_data();
	c3=c1.sub(c2);
	c3.show_data();
	c3=c1.mul(c2);
	c3.show_data();
	c3=c1.div(c2);
	c3.show_data();


getch();
}