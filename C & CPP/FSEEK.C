#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
fp=fopen("sample.txt","w+");
fputs("Hello...!!!",fp);
fseek(fp,50,SEEK_END);
fputs("This is Harsh",fp);
fclose(fp);
getch();
}