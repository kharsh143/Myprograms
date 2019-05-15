#include<stdio.h>
#include<conio.h>
#include<string.h>
#define limit 100
struct names
{
 char name[20];
};
void main()
{
   int i,j,size;
   clrscr();
   printf("Enter The  limit");
   scanf("%d",&size);
   names n[limit];
    for(i=0;i<size;i++)
    {
      printf("Enter The Name");
      scanf("%s",&n[i].name);
    }
    for(i=0;i<size;i++)
    {
       for(j=i+1;j<size;j++)
       {
	 if(strcmp(n[i].name,n[j].name)==0)
	 {
	   printf("%s",n[i]);
	 }
       }
    }
getch();
}