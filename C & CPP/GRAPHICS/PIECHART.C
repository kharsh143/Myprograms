#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main ()
{
   int gd=DETECT,gm,x,y;
   initgraph(&gd,&gm,"\\TurboC3\\BGI");
   outtextxy(270,60,"PIE CHART");
      x=getmaxx()/2;
      y=getmaxy()/2;

      setfillstyle(SOLID_FILL,4);
      pieslice(x,y,0,60,120);
      outtextxy(x+40,y-45,"FOOD");
//      getch();


      setfillstyle(SOLID_FILL,3);
      pieslice(x,y,60,160,120);
      outtextxy(x-30,y-80,"RENT");
  //    getch();


      setfillstyle(SOLID_FILL,5);
      pieslice(x,y,160,250,120);
      outtextxy(x-110,y,"Electricity");
    //  getch();

      setfillstyle(SOLID_FILL,6);
      pieslice(x,y,250,360,120);
      outtextxy(x,y+70,"Saving");
      getch();
      closegraph();

}