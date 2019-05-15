#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp,*fp1;
int no,num;
clrscr();
printf("enter the no to insert in file");
scanf("%d",&no);
fp=fopen("number.txt","w");
putw(no,fp);
fclose(fp);
fp=fopen("number.txt","r");
while(getw(fp)!=EOF)
{
num=getw(fp);
if(num%2==0)
{
fp1=fopen("even.txt","W");
putw(num,fp1);
}
else
{
fp1
fopen("odd.txt","w");
putw(num,fp1);
}
}
fclose(fp);
fclose(fp1);
getch();
}
