#include<iostream.h>
#include<conio.h>
class A
{
public:
  A()
  {
   cout<<"A";
  }

};
class B
{
public:
  B()
  {
   cout<<"B";
  }
};
class C
{
public:
  C()
  {
   cout<<"C";
  }

};
class D:public A,public B,public C
{
public:
D(): A():,B():,c()
 {
   cout<<"D";
 }


};
void main()
{
clrscr();
 D d;
 getch();
}