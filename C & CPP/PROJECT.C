#include<stdio.h>
#include<conio.h>
void main()
{
int x[30],i,n,max=-1,rank[30],j;
clrscr();
printf("enter the n value");
scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
  scanf("%d",&x[i]);
  }
    for(i=0;i<n;i++)
     rank[n]=0;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
     if( (x[j]>max) && (rank[j]==0))
     {
     max=x[j];
     rank[j]=j+1;
     }
    }
    max=-1;
   }

   for(i=0;i<n;i++)
   {
   printf("%d",i);
   }
getch();
}