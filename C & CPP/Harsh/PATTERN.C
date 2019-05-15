#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,star=9;
   clrscr();

   for(i=5;i>=1;i--)
   {
     for(j=5;j>=i;j--)
     {
       printf(" ");
     }
     for(k=1;k<=star;k++)
     {
       printf("*");
     }
     star -=2;
     printf("\n");
   }
   getch();

}