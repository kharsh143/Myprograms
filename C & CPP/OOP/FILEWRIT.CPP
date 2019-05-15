#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class stu
{
 int roll;
 char name[20];
 public:
 void getdata()
 {
  cout<<"Enter The Name And Rollno";
  cin>>name>>roll;
  cout<<"\n";
 }
  void showdata()
  {
   cout<<"Name="<<name<<"Roll No="<<roll;
  }
};
void main()
{
  stu s,ch[25];
  ofstream file("Student");
  char option;
  clrscr();
  do
  {
  s.getdata();
   file.write ((char *)&s,sizeof(s));
   cout<<"record is created";
   cout<<"Do u want to enter more y/n";
   cin>>option;
  }
  while(option=='y'||option=='Y');

  ifstream file1("Student");

  while(!file1.eof())
  {
   file1.read((char*)&s,sizeof(s));
   s.showdata();
  }
  getch();

}