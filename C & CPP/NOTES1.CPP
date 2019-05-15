#include<stdio.h>
#include<conio.h>
void main()
{
int money[]={1000,500,100,50,20,10,5,2,1};
int drawn;
int  i=0,r;
  clrscr();
  printf("enter the amount");
  scanf("%d",&drawn);
  printf("Amount Is %d\n",drawn);
   while(drawn>0)
   {
   r=drawn/money[i];
   drawn=drawn%money[i];
   printf("notes of %d rupess:%d\n",money[i],r);
   i++;
   }
  getch();
}