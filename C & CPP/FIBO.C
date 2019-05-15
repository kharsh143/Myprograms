#include<stdio.h>
#include<conio.h>
void main()
{
  int a=0,b=1,c;
  clrscr();
      while(c<=1000)
      {
	  c=a+b;
	  if(c>1000)
	  {
	   // exit();
	  }
	  printf("%d\t",c);
	  a=b;
	  b=c;
      }

      getch();
}