#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,star=1,n=8;
   clrscr();


      for(i=1;i<=n;i++)
      {
	 for(j=n-1;j>=i;j--)
	 {
	   printf(" ");
	 }
	   for(k=1;k<=star;k++)
	   {
	      printf("*");
	   }
	   star+=2;
	   printf("\n");

      }
      star=13;

      for(i=n-1;i>=1;i--)
      {
	 for(j=n-1;j>=i;j--)
	 {
	   printf(" ");
	 }
	   for(k=star;k>=1;k--)
	   {
	      printf("*");
	   }
	   star-=2;
	   printf("\n");

      }
   getch();
}