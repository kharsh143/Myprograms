#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
class Emp
{
  int id;
  char name[20];
  public:
  void get()
  {
   cout<<"Enter Name And id";
   cin>>name>>id;

  }
  void put()
  {
  cout<<name<<"\t"<<id<<endl;

  }
  char * retname()
  {
     char *n;
     strcpy(n,name);
     return n;
  }

};
Emp e;
fstream f;
void Add()
{
f.open("Emp.dat",ios::app|ios::binary);
e.get();
f.write((char *)&e,sizeof(e));
}
void Display()
{
f.open("Emp.dat",ios::in|ios::binary);
if(!f)
{
  cout<<"File Not open";
}
else
{
   f.seekp(0);
   f.read((char *)&e,sizeof(e));

while(!f.eof())
{
  e.put();
   f.read((char *)&e,sizeof(e));

}
 }
f.close();
}
void Search()
{
  char n[100];
  int found=0;
  fflush(stdin);
  cout<<"Enter The name The U Have Search";
  gets(n);
  f.open("Emp.dat",ios::in|ios::binary);
  if(!f)
  {
    cout<<"File Not Opened";
  }
  else
  {
     f.read((char *)&e,sizeof(e));
   //  int found=0;
     while(!f.eof())
     {
       if(strcmp(n,e.retname())==0)
       {
	 found=1;
	 e.put();
	 cout<<"Enter Any Key";
	 getchar();
	 break;
       }
       f.read((char *)&e,sizeof(e));
     }
  }
    if(found==0)
    {
     cout<<"Name Not Found";
    }

}
void Modify()
{
    int found=0;
   char n[50];
   cout<<"Enter Name That Should be modified";
   fflush(stdin);
   gets(n);
   f.open("Emp.dat",ios::in|ios::out|ios::binary);
   if(!f)
   {
    cout<<"File Not Found";
   }
   else
   {
    f.read((char *)&e,sizeof(e));
 //   int found=0;
    while(!f.eof())
    {
      if(strcmp(n,e.retname())==0)
      {
	f.seekg(0,ios::cur);
	cout<<"Enter New record";
	e.get();
	f.seekp(f.tellg()-sizeof(e));
	f.write((char *)&e,sizeof(e));
	found=1;
	break;
      }
      f.read((char *)&e,sizeof(e));
    }
   }
   f.close();
   if(found==1)
   {
    cout<<"Record Update Successfully";
   }
   else
   {
    cout<<"Record Not Found";
   }
}
void main()
{
  int choice;
  char ch;
  clrscr();
     do
     {
       cout<<"1.Add\n2.Display\n3.search\n4.modify\n5exit";
       cin>>choice;
	   switch(choice)
	   {
	    case 1:Add();
	    break;
	    case 2:Display();
	    break;
	    case 3:Search();
	    break;
	    case 4:Modify();
	    break;
	    case 5:exit(0);
	    break;
	   }
	   cout<<"Do U Want To Continue(Y/n)";
	   cin>>ch;

     }while(ch=='Y'||ch=='y');

}