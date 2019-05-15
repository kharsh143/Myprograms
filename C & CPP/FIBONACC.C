#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n,i;
clrscr();
printf("enter the limit");
scanf("%d",&n);
   a=0;
   b=1;
   printf("%d\t%d\t",a,b);
     for(i=1;i<=n;i++)
      {
       c=a+b;
       printf("%d\t",c);
      a=b;
      b=c;
      }
   getch();
}
