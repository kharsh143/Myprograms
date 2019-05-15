#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name1[5],name2[5];
 int i,j,size,size2,count=0;
 clrscr();
 printf("Enter The First Name");
 scanf("%s",name1);
 printf("Enter The Second Name");
 scanf("%s",name2);
 size=strlen(name1);
 size2=strlen(name2);
    for(i=0;i<size;i++)
    {
      for(j=0;j<size2;j++)
      {
	if(name1[i]==name2[j])
	{
	  count++;
	}
      }
    }
    if(count==size)
    {
      printf("It Is Anagram");
    }
    else
    {
      printf("Not Anagram");

    }
    getch();
}