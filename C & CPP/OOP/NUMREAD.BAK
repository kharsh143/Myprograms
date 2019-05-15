#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#define size 1000
void main()
{
  int i,n[size],limit;
  int ch;
  clrscr();
  cout<<"Enter  the Limit Of Numbers";
  cin>>limit;

  cout<<"Enter"<<limit<<" Numbers";

  for(i=0;i<limit;i++)
  {
  cin>>n[i];
  }
  ofstream file;
  file.open("numread.txt");
   for(i=0;i<limit;i++)
   {
     file<<n[i]<<endl;
   }
  file.close();
   ifstream read("numread.txt");
ofstream  write("fileeven.txt");
  if(!read)
  {
  cout<<"File Cannot Open";
  }
  else
  {
  cout<<"\n\nEven Numbers Are\n";

    for(i=0;i<limit;i++)
    {
    read>>ch;
      if(ch%2==0)
      {
	cout<<ch<<"\t";
	write<<ch<<endl;
      }
    }
  }

getch();

}
