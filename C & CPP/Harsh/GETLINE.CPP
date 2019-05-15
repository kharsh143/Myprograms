#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
char name[100];
int count;
fstream file;
file.open("pqr.txt",ios::in);
    while(!file)
    {
    getline(file,50);
      count++;
    }
    file.close();
getch();

}
