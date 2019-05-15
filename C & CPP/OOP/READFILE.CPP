#include<iostream.h>
#include<fstream.h>
#include<conio.h>

   class stu
   {
      int id;
      char name[20];
      public:
      void putstu()
      {
	cout<<"Name="<<name<<"\t\t"<<"Id="<<id<<endl;

      }

   };
void main()
{
   stu s;
   ifstream file;
   file.open("FileHandling.dat");
   clrscr();
   file.read((char *)&s,sizeof(s));
   while(!file.eof())
   {
     s.putstu();
      file.read((char *)&s,sizeof(s));
   }
   file.close();
   getch();



}
