#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main ()
{
fstream a,b;
char ch;
a.open("Harsh123.txt",ios::in|ios::out);
b.open("Pavan123.txt",ios::in|ios::out);
while (!a.eof())
{
a.get(ch); 
cout<<ch;
b<<ch; 
}
a.close();
b.close();
getch();
}
