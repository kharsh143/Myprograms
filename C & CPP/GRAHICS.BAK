#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define SW getmaxx()
#define SH getmaxy()
#define GroundY SH*0.75
#include<dos.h>
int Idisp=0;
void DrawManAndUmberlla(int x, int Idisp)
{
circle(x,GroundY-90,10);
line(x,GroundY-80,x,GroundY-30);
//hand
line(x,GroundY-70,x+10,GroundY-60);
line(x,GroundY-65,x+10,GroundY-55);
line(x,GroundY-60,x+10,GroundY-70);
line(x,GroundY-55,x+10,GroundY-70);
//legs
line(x,GroundY-30,x+Idisp,GroundY);
line(x,GroundY-30,x-Idisp,GroundY);
//umbrella
pieslice(x+20,GroundY-120,0,180,40);
line(x+20,GroundY-120,x+20,GroundY-70);
}
void Rain(int x)
{
//void rand();
int i,rx,ry,rand;
for(i=0;i<400;i++)
{
rx=rand%SW;
ry=rand%SH;
if(ry<GroundY-4)
{
if(ry<GroundY-120 || (ry>GroundY-120&&(rx<x-20|| rx>x+60)))
line(rx,ry,rx+1,ry+4);
}
}
}

void main()
{
int gd=DETECT,gm,x=0;
gotoxy(40,13);
printf("Harsh");
initgraph(&gd,&gm,"\\TurboC3\\BGI");
while(!kbhit())
{
line(0,GroundY,SW,GroundY);
Rain(x);
Idisp=(Idisp+2)%20;
DrawManAndUmberlla( x, Idisp);
delay(45);
cleardevice();
x=(x+2)%SW;
}
getch();
closegraph();
}