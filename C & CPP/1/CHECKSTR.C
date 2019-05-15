#include<stdio.h>
#include<conio.h>
#include<string.h>
int check(char name[],char name2[]);
int len,len2;
void main()
{
    char st1[10],st2[10];
    int check1;
    clrscr();
    printf("Enter The name");
    scanf("%s",st1);
    printf("Enter The name2");
    scanf("%s",st2);
    len=strlen(st1);
    len2=strlen(st2);
    if(len!=len2)
    {
      printf("String Not Same");
    }
    else
    {
     check1=check(st1,st2);
     if(check1==0)
     {
      printf("String Same");
     }
     else
     {
       printf("Not Same");
     }
    }
getch();

}
int check(char name[],char name2[])
{
      int i;
      for(i=0;i<len;i++)
      {
	 if(name[i]==name2[i])
	 {
	   return 0;
	 }
	 else
	 {
	  return 1;
	 }
      }

}