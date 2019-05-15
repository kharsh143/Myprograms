#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>


void main()
{
int gd=DETECT,gm,a,b,n;
long int i;
initgraph(&gd,&gm,"\\TurboC3\\BGI");
a=getmaxx()/2;
b=getmaxy()/2;
   while(!kbhit())
   {
     for(i=0;i<2000;i=i+20)
     {
     cleardevice();
     setcolor(RED);
     pieslice(a,b,0+i,20+i,250);
     pieslice(a,b,120+i,140+i,250);
     pieslice(a,b,240+i,260+i,250);
     delay(160);
     }
   }
}