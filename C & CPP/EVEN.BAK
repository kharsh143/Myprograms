#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
char ch;
clrscr();
ifstream read("numread.txt");
ofstream  write("fileeven.txt");
  if(!read)
  {
   cout<<"File Cannot Open..........!!!!!!!!";
  }
  else
  {
    while(!read.eof())
    {
      read.get(ch);
      if(ch%2==0)
      {
      cout.put(ch);
	write<<ch;
      }

    }

  }
  write.close();
  ifstream check("fileeven.txt");

  check.close();
  getch();

}