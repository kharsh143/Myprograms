#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j=0;
char st[100],st1[100]={0};
clrscr();
printf("enter the string:\n");
gets(st);
 for(i=strlen(st)-1;i>=0;i--)
 {
 st1[j]=st[i];
 j++;
 }
 st[j]='\0';
 if(strcmp(st,st1)==0)
 printf("the string %s is Palindrome",st);
 else
 printf("the string %s is not Palindrome",st);
getch();
}
