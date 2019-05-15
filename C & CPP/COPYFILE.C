#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 FILE *fp,*fp1;
 char ch;
 clrscr();
 fp=fopen("st.txt","r");
 fp=fopen("copy3.txt","w");
 if(fp==NULL)
 {
   printf("Cannot open file");

 }
 if(fp1==NULL)
 {
 printf("File Cannot Open ");

 }
 while((ch=fgetc(fp))!=(char)EOF)
 {

   fputc(ch,fp1);
 }
 fclose(fp);
 fclose(fp1);
 printf("File Copied ............!!!!!!!!!!!!\nSuccessFully");
}