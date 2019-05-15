#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k;
   clrscr();
      for(i=0;i<50;i++)
      {
	for(j=0;j<50;j++)
	{
	  for(k=0;k<5;k++)
	  {
	    if(i+i+i==30&&i+j+j==18&&j-k==2)
	    {
	       printf("%d",k+i*j);
	    }
	  }
	}
      }
   getch();
}