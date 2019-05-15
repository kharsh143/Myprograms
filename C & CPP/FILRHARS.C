#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp,*fp1;
int no;
clrscr();
fp=fopen("abc.txt","r");
while(getw(fp)!=EOF)
{
no=getw(fp);
if(no%2==0)
{
fp1=fopen("even1.txt","w");
putw(no,fp1);
}
else
{
fp1=fopen("odd1.txt","w");
putw(no,fp1);
}
}
fclose(fp);
fclose(fp1);
getch();

}