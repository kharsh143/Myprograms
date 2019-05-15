#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("pqr.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
rewind(fp);
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
getch();
}
