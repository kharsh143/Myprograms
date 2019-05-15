#include<iostream.h>
#include<conio.h>
#define size 100
#include<string.h>
class Repeat
{
     public :
   char name[20];
   public:
   void getdata()
   {
     cout<<"Enter The Name:\n";
     cin>>name;
   }
};
void main()
{
 int n,i,j,k;
 clrscr();
 cout<<"Enter The Limit";
 cin>> n;
 Repeat r[size];
   for(i=0;i<n;i++)
   {
     r[i].getdata();
   }

   cout<<"Most Repeated Strings Are:\n";
     for(j=0;j<n;j++)
     {
       for(k=j+1;k<n;k++)
       {
	 if(strcmpi(r[j].name,r[k].name)==0)
	 {
	  cout<<r[j].name<<endl;
	 }
       }
     }
getch();
}


