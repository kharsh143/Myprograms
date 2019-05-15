#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"\\TurboC3\\BGI");
    line(100,420,100,60);
    line(100,420,500,420);
    setfillstyle(SOLID_FILL,13);
    bar(150,200,200,419);
    setfillstyle(LINE_FILL,2);
    bar(210,90,275,419);
    setfillstyle(SOLID_FILL,8);
    bar(300,120,350,419);
getch();
closegraph();

}