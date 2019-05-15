#include<iostream.h>
#include<conio.h>
class Matrix
{
   int a[3][3];
   public:
   void getdata()
   {
     cout<<"Enter The 3 by 3 matrix";
     for(int i=0;i<3;i++)
     {
       for(int j=0;j<3;j++)
       {

	 cin>>a[i][j];
       }

     }
   }

   void show()
   {
     cout<<"Entered Elements Are"<<endl;
	for(int i=0;i<3;i++)
	{
	   for(int j=0;j<3;j++)
	   {

	     cout<<a[i][j]<<"\t";
	   }

	   cout<<"\n";
	}
   }
};
void main()
{
clrscr();
 Matrix m;
 m.getdata();
 m.show();
 getch();

}