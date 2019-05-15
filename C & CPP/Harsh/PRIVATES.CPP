#include<iostream.h>
#include<conio.h>
class B;
class A
{
int a;
public :
void geta()
{
  cout<<"Enter The Number";
  cin>>a;
}
void show()
{
cout<<a<<endl;
}
friend void swap(A &a,B &b);
};
class B
{
   int b;
   public :
   void getb()
   {
     cout<<"Enter The Number";
     cin>>b;
   }
   void show2()
   {
   cout<<b;
   }
   friend void  swap(A &a,B &b);

};
void swap(A &a,B &b)
{
 int temp;
 temp=a.a;
 a.a=b.b;
 b.b=temp;
}
void main()
{
  A a1;
  B b1;
  clrscr();
  a1.geta();
  b1.getb();
  a1.show();
  b1.show2();
  swap(a1,b1);
  cout<<"After Swapping"<<endl;
  a1.show();
  b1.show2();
  getch();

}