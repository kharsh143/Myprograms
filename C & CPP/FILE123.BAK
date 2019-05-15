#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp,*fp1;
char ch;
clrscr();
fp=fopen("abc.txt","r");
fp1=fopen("pqr","w");
if(fp==NULL)
{
printf("can not open file");
exit (0);
}
if(fp1==NULL)
{
printf("can not open file");
exit (0);
}

while((ch=fgetc(fp))!=(char)EOF)

{
fputc(ch,fp1);
}
fclose(fp);
fclose(fp1);
printf("\n file copied successfully....!!!!");
getch();
}