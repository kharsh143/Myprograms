#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
   int gd=DETECT,gm,x,y,r,pk;
   clrscr();
   initgraph(&gd,&gm,"\\TurboC3\\BGI");

   printf("Enter The radius \n");
   scanf("%d",&r);

      x=0;
      y=r;
      pk=1-r;
      do
      {
       putpixel(300+x,300-y,n);
      // getch();
       putpixel(300+x,300+y,n);
      // getch();
       putpixel(300-x,300-y,n);
      // getch();
       putpixel(300-x,300+y,n);
       //getch();
       putpixel(300+y,300-x,n);
       //getch();
       putpixel(300+y,300+x,n);
       //getch();
       putpixel(300-y,300-x,n);
       //getch();
       putpixel(300-y,300+x,n);
       //getch();
	 if(pk>0)
	 {
	   pk=pk+(2*x)+1-(2*y);
	   x=x+1;
	   y=y-1;
	 }
	 else
	 {
	    pk=pk+(2*x)+1;
	    x=x+1;
	    y=y;
	 }


      }while(x<y);
      getch();

}