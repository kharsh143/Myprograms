#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm,flag,x,y;

    clrscr();
    initgraph(&gd,&gm,"\\TurboC3\\BGI");
     x=getmaxx()/2;
     y=50;


      while(!kbhit())
      {
	   if(y>=getmaxy()-50||y<50)
	   {
	     flag=!flag;
	   }        setcolor(13);
	       circle(x,y,50);
	       delay(100);
	   cleardevice();
	   if(flag)
	   {
	      y=y+5;
	   }
	   else
	   {
		y=y-5;
	   }
      }
      getch();
      closegraph();

}