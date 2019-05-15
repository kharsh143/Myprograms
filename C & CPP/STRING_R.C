#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define pf printf
#include<string.h>
void main()
{
char *s;
clrscr();
s=(char *)malloc(5*sizeof(char));
strcpy(s,"Harsh");
printf("%s",s);
s=(char *)realloc (s,10);
strcat(s,"Pranil");
printf("\n%s",s);
getch();
}