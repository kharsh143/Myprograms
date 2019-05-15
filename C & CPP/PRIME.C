#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count,n,s;
clrscr();
printf("enter start & end limit");
scanf("%d%d",&s,&n);
   for(i=1;i<=n;i++)
     {
      count=0;
	for(j=1;j<=i;j++)
	  {
	     if(i%j==0)
	     {
	     count++;
	     }
	  }
	if(count==2)
	{
	printf("%d\t",i);
	}
   }
getch();
}