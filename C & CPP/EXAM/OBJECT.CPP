#include<iostream.h>
#include<conio.h>
#define size 100
class student_record
{
  int roll;
  char name[20];
  public :
  void getdata()
  {
    cout<<"Enter The Roll Number And Name"<<endl;
    cin>>roll>>name;
  }
  void show()
  {
    getdata();
    cout<<"Name ="<<name<<"\t"<<"Roll No="<<roll<<endl;
  }

};

void main()
{
  student_record s1[size];
  int n;
  clrscr();
  cout<<"Enter How Many Records You Want";
  cin>>n;
  for(int i=0;i<n;i++)
  {
  s1[i].show();
  }
  getch();
}