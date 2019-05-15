#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,blink;
     while(1)
     {
	if(i==1)
	{
	  printf("Harsh");
	  clrscr();
	  goto blink;
	}
	else
	{
	   blink:printf("       ");
	}
     }
     getch();
}