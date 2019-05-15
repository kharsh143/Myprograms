#include<stdio.h>
#include<conio.h>
void main()
{
  int i,sum=0,r,temp,temp1;
  clrscr();
     for(i=0;i<200;i++)
     {
	 temp=i;
	 temp1=i;
	   while(temp>0)
	   {
	     r=temp%10;
	     sum=sum*10+r;
	     temp=temp/10;
	   }
	   if(sum==temp1)
	   {
	     printf("%d\t",sum);
	   }
	   sum=0;
     }
     getch();
}