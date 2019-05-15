#include<iostream.h>
#include<conio.h>
class B;
class A
{

 public :
  int a;
 void geta()
 {
 cout<<"Enter The A value";
 cin>>a;

 }
 friend void operator +(A,B);
  friend void operator -(A,B);
  friend void operator *(A,B);
   friend void operator /(A,B);
   friend void operator %(A,B);
};
class B
{

  public:
   int b;
  void getb()
  {
    cout<<"Enter The B Value";
    cin>>b;
  }
};
void main()
{
clrscr();
 A a1;
 a1.geta();
 B b1;
 b1.getb();
 a1+b1;
 a1-b1;
 a1*b1;
 a1/b1;
 a1%b1;
 getch();

}
void operator +(A a1,B b1)
{
  cout<<"The Addition is ="<<a1.a + b1.b<<endl;

}
void operator -(A a1,B b1)
{
  cout<<"The Substraction is ="<<a1.a - b1.b<<endl;

}
void operator *(A a1,B b1)
{
  cout<<"The Multiplication  is ="<<a1.a * b1.b<<endl;

}
void operator /(A a1,B b1)
{
  cout<<"The Division is ="<<a1.a / b1.b<<endl;

}
void operator %(A a1,B b1)
{
  cout<<"The Modulus is ="<<a1.a % b1.b<<endl;

}