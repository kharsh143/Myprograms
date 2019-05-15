#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
   int gd=DETECT,gm,i;
   initgraph(&gd,&gm,"\\TurboC3\\BGI");
   for(i=0;i<=18;i++)
   {
     setbkcolor(i);
     delay(1000);
   setcolor(YELLOW);
   circle(300,200,50);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(300,200,YELLOW);
   setcolor(BLACK);
   fillellipse(290,185,2,6);
   fillellipse(310,185,2,6);

   ellipse(300,200,205,330,20,9);
   ellipse(300,200,205,330,20,10);
   ellipse(300,200,205,330,20,11);
   }
getch();
closegraph();
}