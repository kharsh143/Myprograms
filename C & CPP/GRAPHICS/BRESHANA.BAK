#include<stdio.h>
#include<conio.h>
void main()
{
   int x1,x2,y1,y2,x,y,dx,dy,i,check,temp1,temp2,temp3,temp4;
   static int e;
   clrscr();
   printf("enter two times x y");
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
     dx=x2-x1;
     dy=y2-y1;
     x=x1;
     y=y1;
     temp1=(2*dy);
     temp2=(temp1-dx);
     e=temp2;
     printf("\n%d\t%d\t%d\n",e,temp1,dx);
     i=0;
     printf("i\tplot\tx\ty\te\n");

       check:printf("%d\t(%d,%d)\t%d\t%d\t%d\n",i,x,y,x,y,e);
	   while(e>=0)
	   {
	      y=y+1;
	      temp3=(2*dy);
	      e=(e-temp3);

	   }
	   x=x+1;
	   e=e+2*dy;
	   printf("%d",e);
	   i++;

	   if(i<=dx)
	   {
	     goto check;
	   }

     getch();
}