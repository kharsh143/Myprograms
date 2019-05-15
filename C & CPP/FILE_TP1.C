#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char ch;
FILE *fp;
fp=fopen("pqr234.txt","w");
fputs("Hello This Is Harsh.......!!!!",fp);
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
getch();
}
