#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
 ifstream harsh;
 harsh.open("harsh123.txt");
 ifstream pavan;
 pavan.open("pavan123.txt");
char f1,f2;
 while(!harsh.eof())
 {
   harsh>>f1;
   pavan>>f2;
   if(f1!=f2)
   {
   clrscr();
    cout<<"Not Identical"<<endl;

   }
       else
   {

      clrscr();
     cout<<"Identical"<<endl;

   }

 }
 harsh.close();
 pavan.close();

getch();
}