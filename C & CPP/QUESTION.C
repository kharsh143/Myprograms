#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int ch_count,in_count ,sp_count;
FILE *fp;
clrscr();
ch_count=0;
in_count=0;
sp_count=0;
fp=fopen("abc.txt","r");
if(fp==NULL)
{
printf("file is not opened");
}
else
{
while((ch=fgetc(fp))!=EOF)
{
ch_count++;
if(ch==' ')
{
sp_count++;
}
if(ch=='\n')
{
in_count++;
}
}
}
fclose(fp);
printf("number of charecter is %d",ch_count);
printf("No of Blank Space is %d",sp_count);
printf("\nNo of New Line is %d",in_count);
getch();
}
