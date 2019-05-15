#include<stdio.h>
#include<conio.h>
void main()
{
char name[10];
int age,n,i;
clrscr();
printf("enter no");
scanf("%d",&n);
FILE *ptr;
ptr=(fopen("student.txt","w"));
if(ptr==NULL)
{
printf("Error!");
}
for(i=0;i<n;i++)
{
printf("For student %d Enter the Name",i+1);
scanf("%s",name);
printf("enter age");
scanf("%d",&age);
fprintf(ptr,"name:%s\nage:%d",name,age);
}
fclose(ptr);
getch();
}
