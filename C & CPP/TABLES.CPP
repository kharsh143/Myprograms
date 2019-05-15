/*table of any number till limt*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n1,n2;
clrscr();
printf("enter the number which table u want &limit:");
scanf("%d%d",&n1,&n2);
  for(i=1;i<=n2;i++)
  printf("%dx%d=%d\n",n1,i,i*n1);
getch();
}