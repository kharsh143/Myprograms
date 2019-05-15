#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("Enter The Value Of Num1 And Num2\n");
scanf("%d%d",&num1,&num2);
  num1=num1 -(-num2);
   printf("The Addition Is %d",num1);
   getch();
}