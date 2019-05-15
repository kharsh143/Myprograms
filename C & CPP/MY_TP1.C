#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
FILE *p,*q;
clrscr();
p=fopen("mytext.txt","r");
q=fopen("myharsh1","w");

	if(p==NULL)
	{
	printf("File Cannot Open");
	}
	if(q==NULL)
	{
	printf("File Cannot Open......!!!!!!!");
	}
	while((ch=fgetc(p))!=(char) EOF)
	{
	 fputc(ch,q);
	}
	fclose(p);
	fclose(q);
	printf("FILE COPIED SUCESSFULLY.............!!!!!!!!!!!!!!");
getch();
}