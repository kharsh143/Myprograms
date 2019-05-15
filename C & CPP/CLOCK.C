#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm,x,y,sec=0,min=0,hour=0,i=5;
   clrscr();
      initgraph(&gd,&gm,"\\TurboC3\\BGI");
      x=200;
      y=300;
      circle(x,y,60);
      circle(x,y,50);
      //sec
      while(!kbhit())
      {

      line(x,y,200,220);
  //    if(sec==60)
//      {
      line(x,y,220,240);
    //  }
    //  if(hour==60)
     // {
      line(x,y,240,260);
     // }
      }
      getch();
      closegraph();


}