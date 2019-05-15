#include<iostream.h>
#include<conio.h>
class Student
{
  int roll;
  char name[20];
  public :
  void get();
  void show();


};
	void Student :: get()
	{
	  cout<<"Enter The Roll No and Name";
	  cin>>roll>>name;

	}
	void Student :: show()
	{
	  cout<<roll<<"   |"<<"\t"<<name<<"\n";
	}
void main()
{
  Student s[100];
  int n,i;
  clrscr();
  cout<<"Enter The Numbers Of Students[1-100]";
  cin>>n;
      for(i=0;i<n;i++)
      {
	s[i].get();
      }
     cout<<"Roll \t Name"<<"\n";
     cout<<"----------------------"<<"\n";
     for(i=0;i<n;i++)
     {
       s[i].show();
     }
  getch();
}