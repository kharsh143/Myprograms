#include<stdio.h>
#include<conio.h>
#include<iostream.h>
   class Add
   {

     public:
     int a,b,c;
     void setdata()
     {
	  cout<<"Enter Two Numbers";
	  cin>>a>>b;



     }

	  void showdata()
	  {

	  c=a+b;


	  }
	  void ans()
	  {

	  printf("%d",c);
	  }

   };
   void main()
   {
   clrscr();
    Add p,q;
    p.setdata();
    p.showdata();
    p.ans();
     getch();

   }