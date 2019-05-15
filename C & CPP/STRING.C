#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[50],name1[50];
//int len;
clrscr();
printf("enter the name");
gets(name);
//strcpy(name1,name);
//printf("the copied string is:");
//gets(name1);
strrev(name);
puts(name);
//strcat(name,name1);
//printf("the string cat is %s",name);
//len=strlen(name);
//printf("thelength  of %s is %d",name,len);
getch();
}