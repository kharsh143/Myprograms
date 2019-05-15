#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char name[50];
   int i,len,check=0;
   clrscr();
   printf("Enter The Name\n");
   scanf("%s",name);
     len=strlen(name);
	for(i=0;i<len;i++)
	{
	   if(name[i]>47&&name[i]<=57)
	   //here we check whether the entered character is number or not
	   {
	      check++;
	      printf("Please Enter Valid Name\n");
	      printf("Do not Enter Numbers\n");
	   }
	   if(check==1)
	   {
	   //i took break becoz if user enter more than 1 numbers
	   //the upper if condition will execute many times
	   //so to ignore that i took break
	    break;
	   }
	}
	if(check==0)
	{
	printf("You Entered Valid Name\n%s",name);
	}
   getch();
}