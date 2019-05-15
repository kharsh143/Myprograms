#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],size,i,big;
clrscr();
printf("enter the limit");
scanf("%d",&size);
printf("\n enter the numbers");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
    big=a[0];
    for(i=1;i<size;i++)
    {
    if(big<a[i])
     big=a[i];
     }
     printf("big is %d",big);
getch();
}

