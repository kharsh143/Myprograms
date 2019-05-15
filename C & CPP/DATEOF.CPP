#include<iostream.h>
#include<conio.h>
void main()
{
  int y1,y2,d1,d2,m1,m2;
  int month,year,date,days;
  clrscr();
  cout<<"Enter Your Date Of Birth";
  cin>>d1>>m1>>y1;
  cout<<"Enter Present Date";
  cin>>d2>>m2>>y2;
  if(d1>d2)
  {
   days=d1-d2;
   if(m2>m1)
   {
     month=(m2-m1);
     year=(y2-y1);
   }
   else
   {
     month=(m2+12)-m1;
     year=y2-y1;

   }
  }
else
 {
   days=(d2+30)-d1;
   if(m2>m1)
   {
     month=(m2-m1-1);
     year=y2-y1;

   }
   else
   {
    month=m2+12-m1;
    year=(y2-1)-y1;

   }

 }
 int a=year*12-month;
 int b=year*365-days;
 cout<<"\nage="<<year;
 cout<<"\nmonth="<<a;
 cout<<"\ndays="<<b;
getch();
}