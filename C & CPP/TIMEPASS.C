#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
int i;
fp=fopen("pqr.txt","r+");
if(fp==NULL)
{
printf("file is not loaded....!!!!");
}
fseek(fp,25,SEEK_END);
fputs("Harsh",fp);
i=ftell(fp);
printf("%d",i);
fclose(fp);
getch();
}