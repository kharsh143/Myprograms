#include<stdio.h>
#include<conio.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void main()
{
   int c=0;
   while(1)
   {
      c=0;
      switch(c=getch())
      {
	case UP:printf("UP");
	break;
	case DOWN:printf("DOWN");
	break;
	case RIGHT:printf("RIGHT");
	break;
	case LEFT:printf("LEFT");
	break;
	case 1:exit(0);
	break;
      }
   }

}


