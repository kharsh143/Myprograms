#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,pos,a[10],i;
clrscr();
printf("Enter The Numbrs of Elements");
scanf("%d",&n);
   printf("Enter %d Elements",n);
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     }

     printf("Enter the Positon to be insert");
     scanf("%d",&pos);
     printf("Enter the Number");
     scanf("%d",&num);
     for(i=n;i>=pos;i--)
     {
     a[i+1]=a[i];
     }
     a[pos]=num;
     n++;
	printf("After Inserting\n");
	  for(i=0;i<n;i++)
	  {
	  printf("%d",a[i]);
	  }
getch();
}