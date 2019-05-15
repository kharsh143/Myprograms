#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
void main()
{
char name[20],name2[20];
clrscr();

  cout<<"Enter The Name\n";
  cin>>name;
    ifstream file("cppfile.txt");
   if(!file)
   {
    cout<<"File Cannot Open";
   }
   else
   {
      while(!file.eof())
      {
	  file>>name2;
      }

   }
   if(strcmp(name,name2)==0)
   {
     cout<<"Same";
   }
   else
   {
     cout<<"Try Again\n";
   }
getch();
}