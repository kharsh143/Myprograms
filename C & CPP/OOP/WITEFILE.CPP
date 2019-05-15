#include<iostream.h>
#include<fstream.h>
#include<conio.h>

   class Emp
   {
      int age;
      char name[20];
      public:
      void getemp()
      {
	cout<<"Enter Empolyee Age And Name";
	cin>>age>>name;

      }

   };
void main()
{
clrscr();
   Emp e;
  ofstream file;
   file.open("FileHandling.dat");
   char op;
   do
   {
     e.getemp();
     file.write((char *)&e,(sizeof(e)));
     cout<<"Do u Want more entry y/n"<<endl;
     cin>>op;
   } while(op=='y'||op=='Y');
   file.close();
   getch();
}
