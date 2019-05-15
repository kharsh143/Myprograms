#include<iostream.h>
#include<conio.h>
class A
{
   int a;
   public :
   void geta(int x)
   {
    a=x;
   }
   void operator >(A a1)
   {
    a>a1.a?cout<<"A is Greater":cout<<"B is greater";
   }


};
void main()
{ A a1,a2;
  a1.geta(10);
  a2.geta(20);
 clrscr();
 a1>a2;
 getch();
}