#include<stdio.h>
#include<conio.h>
void main()
{
char password[100],username[10],pw;
int i;
clrscr();
printf("enter the user name:");
 gets(username);
 printf("enter the password:");
 for(i=0;i<10;i++)
 {
 pw=getch();
 password[i]=pw;
 pw='*';
 printf("%c",pw);
 }
 password[i]='\0';
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ your user name is:%s",username);
 printf("\n Your password is :%s",password);
 getch();
}
