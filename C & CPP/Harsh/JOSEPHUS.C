#include<stdio.h>
#include<conio.h>
void main()
{
   int n,sum=1,r,dif;
   clrscr();
   printf("Enter N number");
   scanf("%d",&n);

     while(sum<n)
     {
       sum=sum*2;
       if(sum>n)
       {
	 break;
       }
	r=sum;
     }
   if(n==1)
   {
    printf("1");
   }
   else
   {
     dif=n-r;
     printf("%d person is Live",2*dif+1);
   }
     getch();
}