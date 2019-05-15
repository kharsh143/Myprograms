#include<iostream.h>
#include<conio.h>
class Array
{
public :
   int a[10],m,i,location;

   void getdata();
   void display();
   void maxi();
   void mini();


};
void Array :: getdata()
{
  int i;
  location=1;
  cout<<"Enter 10 Numbers";
    for(i=0;i<5;i++)
    {
     cin>>a[i];
    }


}
void Array :: display()
{

  int i;
  for(i=0;i<5;i++)
  {
    cout<<a[i]<<"\t";

  }

}
void Array :: maxi()
{
  m=a[0];
  for(i=1;i<5;i++)
  {
  if(a[i]>m)
  {
    m=a[i];
    location=i+1;
  }
  }
cout<<"Maximum Number is"<<m;
}
void Array :: mini()
{
  m=a[0];
  for(i=1;i<5;i++)
  {
  if(a[i]<m)
  {
    m=a[i];
    location=i+1;
  }
  }
cout<<"\nMinimum Number is"<<m;
}
void main()
{
clrscr();
   Array a;
   a.getdata();
   a.maxi();
   a.mini();
   getch();

}