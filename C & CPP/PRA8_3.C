#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp,*fp1;
char ch;
fp=fopen("abc.txt","r");
fp1=fopen("pqr.txt","w");
  if(fp==NULL)
  {
  printf("cannot open fp soucre file");
  }
  if(fp1==NULL)
  {
  printf("cannot open fp1 soucre file");
  }
  while((ch=fgetc(fp))!=(char)EOF)
  {
  fputc(ch,fp1);
  }
  fclose(fp);
  fclose(fp1);
  printf("File Is Copied Successfully....!!!! ");
getch();
}

