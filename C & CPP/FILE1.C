#include<stdio.h>
#include<conio.h>
struct emp
{
char name[10];
int age;
};
void main()
{
struct emp e;
 FILE *p;
 FILE *q;
 clrscr();
 p=fopen("abc.txt","w");
 q=fopen("abc.txt","r");
 printf("enter the name & age");
 scanf("%s%d",e.name,&e.age);
 fprintf(p,"%s %d",e.name,e.age);
 fclose(p);

 do
 {
 fscanf(q,"%s%d",e.name,e.age);
 printf("%s%d",e.name,e.age);
 }while(!eof(q));
 getch();
}