#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,rev=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
printf("the number %d before reverse\n",n);
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("the reverse number is=%d",rev);
getch();
}