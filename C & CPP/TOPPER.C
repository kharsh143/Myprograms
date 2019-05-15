#include<iostream.h>
#include<conio.h>
class Array
{
public :
   int a[10],max,i,location=1;

   void getdata();
   void display();


};
void Array :: getdata()
{
  int i;
  cout<<"Enter 10 Numbers";
    for(i=0;i<10;i++)
    {
     cin>>a[i];
    }


}
void Array :: display()
{

  int i;
  for(i=0;i<=9;i++)
  {
    cout<<a[i]<<"\t";

  }

}
void main()
{
clrscr();
   Array a;
   a.getdata();
   a.display();
   getch();



}