#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k;
 clrscr();
    for(i=1;i<15;i++)
    {
       for(j=1;j<15;j++)
       {
	  for(k=1;k<15;k++)
	  {
	     if(i+i+i==30&&j+j+i==20&&k+k+j==13)
	     {
	       printf("\nI=%d\nJ=%d\nK=%d\n",i,j,k);
	       printf("I+J*K=%d",i+j*k);
	     }
	  }
       }
    }
getch();
}