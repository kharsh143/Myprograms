#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int points[6]={150,175,200,225,250,150},gd=DETECT,gm,i,s;
   clrscr();
   initgraph(&gd,&gm,"\\TurboC3\\BGI");

   drawpoly(3,points);
   printf("Enter The Number To Sacle the polygon");
   scanf("%d",&s);

   for(i=0;i<6;i++)
   {
       points[i]+=points[i]+s;
   }
   setcolor(4);
   drawpoly(3,points);
   getch();
   closegraph();
}