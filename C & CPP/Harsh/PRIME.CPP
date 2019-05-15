/*First Fifty Prime Numbers*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,j,count;
clrscr();

   for(i=1;i<=50;i++)
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
	printf("%d\t",i);
	}
	

   }
getch();
}