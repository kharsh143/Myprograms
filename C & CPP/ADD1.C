#include<stdio.h>
#include<conio.h>
void main(int argc , char argv[])
{
int i,sum=0;
if(argc!=2)
{
printf("enter the number");
}
printf("the sum is :");
  for(i=1;i<argc;i++)
  sum=sum+(argv[i]);
  printf("%d",sum);
getch();
}