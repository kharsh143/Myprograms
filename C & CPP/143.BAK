#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp,*pf;
int no,fno;
clrscr();
printf("enter the numbers");
scanf("%d",&no);
fp=fopen("no.txt","w");
fprintf(fp,"%d",no);
fclose(fp);
fp=fopen("no.txt","r");
fscanf(fp,"%d",&fno);
fclose(fp);
if(fno%2==0)
{
pf=fopen("even.txt","w");
fprintf(pf,"%d",fno);
fclose(pf);
}
else
{
pf=fopen("od.txt","w");
fprintf(pf,"%d",fno);
fclose(pf);
}
getch();
}