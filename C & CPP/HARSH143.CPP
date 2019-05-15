#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter the n value");
scanf("%d",&n);
 {
 n=n++ + n++ + n++;
 }
 printf("the sum is:\n %d",n);
 scanf("%d",n);
getch();
}