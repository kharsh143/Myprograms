#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n;
clrscr();
a=0;
b=1;
printf("Enter The Number");
scanf("%d",&n);
printf("%d\n%d",a,b);
  while(n>0)
  {
  c=a+b;
  printf("%d\n",c);
  a=b;
  b=c;
  }
getch();
}

