#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int i,n;
clrscr();
printf("enter the delay time");
scanf("%d",&n);
    for(i=100;i<=120;i++)
    {
      sound(i*random(100));
      delay(n);
      nosound();
    }
getch();
}