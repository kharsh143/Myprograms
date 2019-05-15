#include<iostream.h>
#include<conio.h>

	class A
	{
	   int id;
	   char name[20];
	   public:
	   void get()
	   {
	     cout<<"Enter The Name And roll no";
	     cin>>name>>id;

	   }

	   void put()
	   {
	     cout<<"The Name="<<name<<endl;
	     cout<<"The Roll-"<<id<<endl;


	   }




	};


		class B :public A
		{

		   int marks[5],sum,i;
		   public :
		   void getm()
		   {
		   sum=0;
		     cout<<"Enter ur 5 Subj Marks";
			  for(i=0;i<5;i++)
			  {
			   cin>>marks[i];
			   sum=sum+marks[i];

			  }

		   }
		   void putm()
		   {
		     cout<<"The Average Marks is "<<sum/5;


		   }

		  };

void main()
{
   B der;
   clrscr();
   der.get();
   der.getm();
   der.put();
   der.putm();
getch();




}