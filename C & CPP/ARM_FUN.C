#include<stdio.h>
#include<conio.h>
void arm(int n);
void main()
{
int num;
clrscr();
printf("enter the number");
scanf("%d",&num);
arm(num);
getch();
}
void arm(int n)
{
int sum,temp,r;
temp=n;
sum=0;
  while(n>0)
  {
  r=n%10;
  sum=sum+r*r*r;
  n=n/10;
  }
  if(sum==temp)
  printf("%d is Armstrong",temp);
  else
  printf("%d is Not Armstrong",temp);
  }
