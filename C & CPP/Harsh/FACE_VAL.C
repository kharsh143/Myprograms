#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,r,face=0;
clrscr();
printf("Enter The Numbers");
scanf("%d",&num);

       while(num>0)
       {
	 r=num%10;
	 sum=sum+r;
	 num=num/10;
       }
       printf("The Sum Is %d",sum);
       while(sum>0)
       {
	 r=sum%10;
	 face=face+r;
	 sum=sum/10;
       }
       printf("\nThe Face Value Is %d",face);
getch();
}