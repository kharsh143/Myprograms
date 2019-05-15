#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,j,count,count1=0;
clrscr();

   for(i=1;i<=1000;i++)
     {
      count=0;
	for(j=1;j<=i;j++)
	  {
	     if(i%j==0)
	     {
	     count++;

	     }
	  }
	if(count==2)
	{
	cout<<i<<"\t";
	  count1++;
	}
	if(count1==50)
	{
	  exit(0);
	}

   }
getch();
}