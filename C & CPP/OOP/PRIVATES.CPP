#include<iostream.h>
#include<conio.h>
   class B;
   class A
   {
     int a;
     public :
     void geta()
     {
      cout<<"Enter The A Value";
      cin>>a;
     }
     void show()
     {
      cout<<"A="<<a<<endl;;

     }
     friend void swap (A &a,B &b);
   };
   class B
   {
     int b;
     public:
     void getb()
     {
       cout<<"Enter The B Value";
       cin>>b;
     }
     void show()
     {
      cout<<"B="<<b<<endl;
     }
     friend void swap (A &a,B &b)
     {
      int temp;
      temp=a.a;
      a.a=b.b;
      b.b=temp;

     }
   };
   void main()
   {
    clrscr();
    A a1;
    B b1;
    a1.geta();
    b1.getb();
    a1.show();
    b1.show();
    cout<<"After Swapping"<<endl;
    swap(a1,b1);
    a1.show();
    b1.show();
    getch();
   }