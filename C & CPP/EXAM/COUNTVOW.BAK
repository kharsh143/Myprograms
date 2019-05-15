#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 int count=0;
 char c;
 clrscr();
 ifstream file;
 file.open("Harsh123.txt");
 if(!file)
 {
  cout<<"File Cannot Open";
 }
 else
 {
  while(!file.eof())
  {
    file>>c;
    if(c=='a'||c=='A'|| c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    {
      count++;
     cout<<c<<"="<<count;;
    }
  }
 }

}