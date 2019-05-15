#include<iostream.h>
#include<conio.h>
int add();
int sub();
int mul();
int div();
class Op
{
 public:
 int a,b,c;
 void setdata()
 {
   a=20;
   b=5;
 }


};
void main()
{
  int ch;
  clrscr();
  cout<<"Enter Your Choice";
  cout<<"1.add\n2.sub\n3.mul\n4div\n";
  cin>>ch;
     switch(ch)
     {
	case 1:cout<<"The Addition Is "<<add();
	break;
	case 2:cout<<"The Subtration is "<<sub();
	break;
	case 3:cout<<"The Multiplication is "<<mul();
	break;
	case 4:cout<<"The Division is "<<div();
	break;
     }

   getch();
}
int add()
{
 Op add;
 add.setdata();
 add.c=add.a+add.b;
 return add.c;
}
int sub()
{
 Op sub;
 sub.setdata();
 sub.c=sub.a-sub.b;
 return sub.c;
}
int mul()
{

 Op add;
  add.setdata();
 add.c=add.a*add.b;
 return add.c;
}
int div()
{

 Op add;
  add.setdata();
 add.c=add.a/add.b;
 return add.c;
}