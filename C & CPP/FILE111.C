#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char name[10];
int r;
clrscr();
fp=fopen("timepass.txt","w");
printf("name & roll");
scanf("%s%d",name,&r);
fprintf(fp,"%s\t%d",name,r);
printf("%s\t%d",name,r);
getch();
}