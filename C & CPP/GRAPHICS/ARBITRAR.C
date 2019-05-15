#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void rotate1(int xt,int yt,double d);
void stat2(int xt1,int yt1,double d);
int x=330,y=250;
int a[4][2]={{50,50},{100,50},{100,100},{50,100}};
void draw(int x,int y)
{
  setcolor(WHITE);
  line(x,y-250,x,y+250);
  line(x-330,y,x+330,y);
}
void stat(int x,int y)
{
  line(x+a[0][0],y-a[0][1],x+a[1][0],y-a[1][1]);
  line(x+a[1][0],y-a[1][1],x+a[2][0],y-a[2][1]);

  line(x+a[2][0],y-a[2][1],x+a[3][0],y-a[3][1]);
  line(x+a[3][0],y-a[3][1],x+a[0][0],y-a[0][1]);
}
void translate(int x,int y)
{
  int tx=-50,ty=50,xt,yt,xt1,yt1;
  double d;
  printf("\nEnter Angle of Rotation: ");
  scanf("%lf",&d);
  cleardevice();
  draw(x,y);
  setcolor(WHITE);
  stat(x,y);
  xt=x+tx;
  yt=y+ty;
  getch();
  setcolor(GREEN);
  stat(xt,yt);
  rotate1(xt,yt,d);
  xt1=x-tx;
  yt1=y-ty;
  stat2(xt1,yt1,d);
}
void rotate1(int xt,int yt,double d)
{
  double x2r,y2r,x3r,y3r,x4r,y4r;
  d=(d*3.14)/180;
  x2r=a[0][0]+(((a[1][0]-a[0][0])*cos(d))-((a[1][1]-a[0][1])*sin(d)));
  y2r=a[0][1]+(((a[1][0]-a[0][0])*sin(d))+((a[1][1]-a[0][1])*cos(d)));
  x3r=a[0][0]+(((a[2][0]-a[0][0])*cos(d))-((a[2][1]-a[0][1])*sin(d)));
  y3r=a[0][1]+(((a[2][0]-a[0][0])*sin(d))+((a[2][1]-a[0][1])*cos(d)));
  x4r=a[0][0]+(((a[3][0]-a[0][0])*cos(d))-((a[3][1]-a[0][1])*sin(d)));
  y4r=a[0][1]+(((a[3][0]-a[0][0])*sin(d))+((a[3][1]-a[0][1])*cos(d)));
  getch();
  setcolor(YELLOW);
  line(xt+a[0][0],yt-a[0][1],xt+x2r,yt-y2r);
  line(xt+x2r,yt-y2r,xt+x3r,yt-y3r);
  line(xt+x3r,yt-y3r,xt+x4r,yt-y4r);
  line(xt+x4r,yt-y4r,xt+a[0][0],yt-a[0][1]);
}
void stat2(int xt1,int yt1,double d)
{
  double x2r,y2r,x3r,y3r,x4r,y4r;
  d=(d*3.14)/180;
  x2r=a[0][0]+(((a[1][0]-a[0][0])*cos(d))-((a[1][1]-a[0][1])*sin(d)));
  y2r=a[0][1]+(((a[1][0]-a[0][0])*sin(d))+((a[1][1]-a[0][1])*cos(d)));
  x3r=a[0][0]+(((a[2][0]-a[0][0])*cos(d))-((a[2][1]-a[0][1])*sin(d)));
  y3r=a[0][1]+(((a[2][0]-a[0][0])*sin(d))+((a[2][1]-a[0][1])*cos(d)));
  x4r=a[0][0]+(((a[3][0]-a[0][0])*cos(d))-((a[3][1]-a[0][1])*sin(d)));
  y4r=a[0][1]+(((a[3][0]-a[0][0])*sin(d))+((a[3][1]-a[0][1])*cos(d)));
  getch();
  setcolor(RED);
  line(xt1,yt1,xt1+x2r-a[0][0],yt1-y2r+a[0][1]);
  line(xt1+x2r-a[0][0],yt1-y2r+a[0][1],xt1+x3r-a[0][0],yt1-y3r+a[0][1]);
  line(xt1+x3r-a[0][0],yt1-y3r+a[0][1],xt1+x4r-a[0][0],yt1-y4r+a[0][1]);
  line(xt1+x4r-a[0][0],yt1-y4r+a[0][1],xt1,yt1);
}
void main()
{
  int gd=DETECT,gm,d;
  initgraph(&gd,&gm,"\\TurboC3\\bgi");
  cleardevice();
  translate(x,y);
  getch();
  closegraph();
}