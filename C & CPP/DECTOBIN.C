#include<stdio.h>
#include<conio.h>

void main()
{
  int num,mod,div,sum=0,temp=1;
  clrscr();
     printf("Enter The Decimal Number");
     scanf("%d",&num);
     while(num>0)
     {
       mod=num%2;
       sum=sum+mod*temp;
       temp=temp*10;
       num=num/2;

     }
     printf("The Binary Number Is:%d",sum);
getch();
}