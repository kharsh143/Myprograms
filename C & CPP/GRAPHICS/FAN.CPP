#include<iostream.h>
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
printf("Enter The Fan Number");
scanf("%d",&n);
   switch(n)
   { case 1:for(i=0;i<1500;i=i+20)
     {
     cleardevice();
     setcolor(RED);
     pieslice(a,b,0+i,20+i,250);
     pieslice(a,b,120+i,140+i,250);
     pieslice(a,b,240+i,260+i,250);
     delay(200);
     }
     break;
     case 2:for(i=0;i<2000;i=i+20)
     {
     cleardevice();
     setcolor(RED);
     pieslice(a,b,0+i,20+i,250);
     pieslice(a,b,120+i,140+i,250);
     pieslice(a,b,240+i,260+i,250);
     delay(160);
     }
     break;
     case 3: for(i=0;i<3000;i=i+20)
     {
     cleardevice();
     setcolor(RED);
     pieslice(a,b,0+i,20+i,250);
     pieslice(a,b,120+i,140+i,250);
     pieslice(a,b,240+i,260+i,250);
     delay(120);
     }
     break;
     case 4:for(i=0;i<4000;i=i+20)
     {
     cleardevice();
     setcolor(RED);
     pieslice(a,b,0+i,20+i,250);
     pieslice(a,b,120+i,140+i,250);
     pieslice(a,b,240+i,260+i,250);
     delay(80);
     }
     break;
     case 5:for(i=0;i<5000;i=i+20)
     {
     cleardevice();
     setcolor(RED);
     pieslice(a,b,0+i,20+i,250);
     pieslice(a,b,120+i,140+i,250);
     pieslice(a,b,240+i,260+i,250);
     delay(40);
     }
     break;
     default :exit(0);
     break;
   }




    getch();
    closegraph();
}