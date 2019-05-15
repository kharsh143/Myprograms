#include<iostream.h>
#include<conio.h>
class Harsh
{
  public :
  virtual void show()=0;

};
class Pavan :public Harsh
{
  public :
  void show()
  {
    cout<<"This Is Derived Class";
  }

};
void main()
{
clrscr();
 Harsh *ptr;
 Pavan p1;
 ptr=&p1;
 ptr->show();
 getch();
}