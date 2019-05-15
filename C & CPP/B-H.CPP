#include<stdio.h>
#include<conio.h>
void main()
{
int b,h=0,i=1,r;
clrscr();
printf("enter the binary number");
scanf("%d",&b);
while(b)
{
r=b%10;
h=h+r*i;
i=i*2;
b=b/10;
}
printf("%LX",h);
getch();
}