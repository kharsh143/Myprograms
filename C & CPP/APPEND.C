#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp,*fp1;
char ch;
fp=fopen("abc.txt","r");
fp1=fopen("abc.txt","a");
if(fp==NULL)
{
printf("file is not opened");
}
while((ch=fgetc(fp))!(char)EOF)
{
fputs(ch,fp1)
}
fclose(fp);
fclose(fp1);
getch();
}
