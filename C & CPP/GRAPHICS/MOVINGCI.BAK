#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
    int gd=DETECT,gm,x,y,r,c=0,x1,y1;
    long int i;
    clrscr();
    x=350;
    y=230;
    r=50;
    initgraph(&gd,&gm,"\\TurboC3\\BGI");

     circle(x,y,r);
     while(1)
     {
	c=0;
	c=getch();
	//upp
	if(c==72)
	{

	    x=350;
	    y=230;
	     while(!kbhit())
	     {
	      setcolor(13);
	      setcolor(BLACK);
	      y=y-20;
	      circle(x,y,r);
	      setcolor(13);
	      circle(x,y,r);
	      delay(100);
	      setcolor(BLACK);
	      circle(x,y,r);
	     }
	}

	     //DOWNnnnnnnnnnn
	if(c==80)
	{
	    x=350;
	    y=230;

	     while(!kbhit())
	     {
	      setcolor(13);
	      setcolor(BLACK);
	      y=y+20;
	      circle(x,y,r);
	      setcolor(13);
	      circle(x,y,r);
	      delay(100);
	      setcolor(BLACK);
	      circle(x,y,r);
	     }


	  }

	    //RIGHTTTTTTTTTTTTT
	  if(c==77)
	{
	    x=350;
	    y=230;
	     while(!kbhit())
	     {
	      setcolor(13);
	      setcolor(BLACK);
	      y=x+20;
	      circle(x,y,r);
	      setcolor(13);
	      circle(x,y,r);
	      delay(100);
	      setcolor(BLACK);
	      circle(x,y,r);
	     }
	 }


	 ////LEFTTTTTTTTTTTTTTT

	 if(c==75)
	{
	    x=350;
	    y=230;
	     while(!kbhit())
	     {
	      setcolor(13);
	      setcolor(BLACK);
	      y=x-20;
	      circle(x,y,r);
	      setcolor(13);
	      circle(x,y,r);
	      delay(100);
	      setcolor(BLACK);
	      circle(x,y,r);
	     }
	 }

     }
     getch();
     closegraph();
}