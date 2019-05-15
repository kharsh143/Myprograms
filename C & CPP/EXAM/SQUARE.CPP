#include<iostream.h>
#include<conio.h>
class Square
{
   public :
   void show()
   {
   cout<<"Even Numbers Square Are:\n";
     for(int i=1;i<=20;i++)
     {
	if(i%2==0)
	{
	 cout<<i<<"="<<i*i<<endl;
	}
     }
   }

};
void main()
{
  clrscr();
  Square S1;
  S1.show();
  getch();

}