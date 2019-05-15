#include<stdio.h>
#include<conio.h>
void main()
{
char password[100],username[100],show;
int i,c;
clrscr();
printf("enter the Email ID:");
 gets(username);
 printf("enter the password:");
 for(i=0;i<10;i++)
 {
 show=getch();
 password[i]=show;
 show='*';
 printf("%c",show);
 }

 printf("\nLog in your account \npress 1 if yes \npress 2 if no\n");
 scanf("%d",&c);
 switch(c)
 {
 case 1:printf("\nWELCOME TO FACEBOOK\n");
 break;
 case 2:printf("\nPlease Try again\n");
 break;
 }
 password[i]='\0';
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Your Email id  is:");
 puts(username);
 printf("\n Your password is :%s",password);
 getch();
}
