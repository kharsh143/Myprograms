#include<iostream.h>
#include<conio.h>

   class Swap
   {
     int a,b;
     public:
     void setdata(int x,int y)
     {
     a=x;
     b=y;

     }
     void swap()
     {
      int temp;
      temp=a;
      a=b;
      b=temp;
     }
     void show()
     {
       cout<<"A="<<a<<"\t"<<"B="<<b<<endl;
     }

   };

void main()
{
int p,q;
clrscr();
cout<<"Enter";
cin>>p>>q;
Swap s1;

s1.setdata(p,q);
s1.show();
s1.swap();
s1.show();
getch();
}