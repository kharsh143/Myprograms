#include<stdio.h>
#include<conio.h>
int check(int d,int m,int y)
{
   static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
   y -=m<3;
   return (y+y/4 -y/100 +y/400 + t[m-1]+d)%7;

}

void main()
{
    int dd,mm,yy,day;
    clrscr();
    printf("Enter The Date");
    scanf("%d%d%d",&dd,&mm,&yy);
    day=check(dd,mm,yy);
       switch(day)
       {
	  case 1:printf("Monday");
	  break;
	  case 2:printf("Tuesday");
	  break;
	  case 3:printf("Wednesday");
	  break;
	  case 4:printf("Thusday");
	  break;
	  case 5:printf("Friday");
	  break;
	  case 6:printf("Saturday");
	  break;
	  case 7:printf("Sunday");
	  break;
       }
    getch();
}