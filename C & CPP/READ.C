#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
fp=fopen("pqr143.txt","r");
fputs("Hello Harsh",fp);
if(fp==NULL)
{
printf("file is cannot be opened");
}
getch();
}