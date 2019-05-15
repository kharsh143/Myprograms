#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main ()
{
ifstream fin;
ofstream fout;
fin.open("AllNum.txt");
fout.open("Odd.txt");
int n;
fin>>n;
while(fin)
{
    if(n%2==0)
    {
     cout<<"Even"<<endl;
     fout<<n<<endl;
    }
    fin>>n;
}
getch();

}