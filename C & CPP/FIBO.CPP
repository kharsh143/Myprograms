#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n,i;
clrscr();
printf("Enter the limit:-");
scanf("%d",&n);
printf("%d\n%d",a,b);
  for(i=1;i<=n;i++)
  {
  c=a+b;
  printf("\n%d",c);
  a=b;
  b=c;
  }
getch();
}
