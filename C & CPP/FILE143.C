#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp,*fp1;
char ch;
clrscr();
fp=fopen("abc.txt","r");
fp1=fopen("sampe1.txt","w");
if(fp==NULL)
{
printf("file cannot be open");
}
if(fp1==NULL)
{
printf("file cannot be open");
}
while((ch=fgetc(fp))!=(char)EOF)
{
fputc(ch,fp1);
}
fclose(fp);
fclose(fp1);
getch();
}