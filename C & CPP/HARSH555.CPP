#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
printf("enter the season in 1 - 3:");
scanf("%d",&m);
   switch(m)
   {
   case 1:printf("it is winter months between\n  oct - jan");
   break;
   case 2: printf("it is summer months between\n feb - may");
   break;
   case 3:printf("it is rainy months between\n  june - sept");
   break;
   default:printf("wrong input");
   }
getch();
}