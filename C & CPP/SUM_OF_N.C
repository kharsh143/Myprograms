#include<stdio.h>
#include<conio.h>
int sum(int a);
void main()
{
int n,result;
clrscr();
printf("enter the numbers");
scanf("%d",&n);
result=sum(n);
printf("the sum of numbers is %d",result);
getch();
}
int sum(int a)

{
int r,temp;
temp=0;
  while(a>0)
  {
  r=a%10;
  temp=temp+r;
  a=a/10;
  }
  return(temp);
}

