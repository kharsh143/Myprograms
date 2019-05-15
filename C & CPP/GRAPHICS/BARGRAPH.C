#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"\\TurboC3\\BGI");
    line(100,420,100,60);
    line(100,420,500,420);
    setfillstyle(LINE_FILL,13);
    bar(150,200,200,419);
    outtextxy(165,175,"A");
    setfillstyle(LINE_FILL,2);
    bar(225,150,275,419);
    outtextxy(245,135,"B");
    setfillstyle(LINE_FILL,6);
    bar(300,120,350,419);
    outtextxy(320,100,"C");
    setfillstyle(LINE_FILL,11);
    bar(370,180,420,419);
    outtextxy(390,160,"D");
getch();
closegraph();
}