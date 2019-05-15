#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
 for(i=1;i<n;i++)


 if(n%i==0)

 sum=sum+i;

 if (n==sum)
 {
 printf("the number is perpect number");
 }
 else
 {
 printf("the number is not perpect number");
 }


getch();
}
