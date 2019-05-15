#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,n=5,star=1;;
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
	star=star+2;
	printf("\n");

      }

}