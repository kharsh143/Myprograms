#include<iostream.h>
#include<conio.h>
class A
{
 public :
 void show()
 {
   cout<<"A\n";
 }

};
class B:public A
{
  public :
  void show()
  {
   cout<<"B\n";
  }
};
void main()
{
clrscr();
A a;
B b;
B *ptr=&b;
ptr->show();
B *ptr1=&a;
ptr1->show();
getch();
}