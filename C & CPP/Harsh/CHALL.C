#include<stdio.h>
#include<conio.h>
void main()
{
   int powe[1000],i,n,sum=1,r;
   clrscr();
   printf("Enter N number");
   scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       sum=sum*2;
       powe[i]=sum;
     }
       for(i=0;i<n;i++)
       {
	 if(powe[i-1]<n&&powe[i+1]>n)
	 {
	   r=i;
	 }
       }
       printf("%d",(2*(n-r)+1));

     getch();

}