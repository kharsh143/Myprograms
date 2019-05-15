#include<stdio.h>
#include<conio.h>
void main()
{
long int b,d=0,j=1,r;
clrscr();
printf("Enter the any number binary");
scanf("%ld",&b);
while(b!=0)
{
r=b%10;
d=d+r*j;
j=j*2;
b=b/10;
}
printf("equivalent decimal value:%ld",d);
getch();
}