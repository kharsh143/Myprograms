#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int len;
FILE *fp;
fp=fopen("lmn.txt","w+");
clrscr();
fputs("Hello Harsh",fp);
fseek(fp,30,SEEK_END);
fputs("TODAY is paper",fp);
len=ftell(fp);
printf("size is %d",len);
//rewind(fp);
fclose(fp);
getch();
}