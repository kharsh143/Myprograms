#include<conio.h>
#include<fstream.h>
#include<iostream.h>
#include<string.h>
void main()
{
clrscr();
ifstream fin;
fin.open("pqr.txt");

int countlines=0;
int countwords=0;
int countchar=0;


char line[1000];
char ch[30];
char c;

while(!fin.eof())
{
fin>>ch;
countwords++;
}
  cout<<"\n Number of words : "<<countwords-1 ;

fin.close();
fin.open("pqr.txt");

while(!fin.eof())
{
fin>>c;
countchar++;
}
  cout<<"\n Number of characters : "<<countchar-1;

fin.close();
ifstream file;
file.open("pqr.txt");

while(!file.eof())
{
file.getline(line,'\n');
countlines++;
}
  cout<<"\n Number of lines : "<<countlines-1;

fin.close();
getch();
}