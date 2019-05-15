#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 200
struct kingdom
{
  long  int goldlooted;
  long  int lootedhouse;


};
struct  house
{
  long int  goldinhouse;

};
void main()
{
 struct kingdom king;
 struct house hous[size];
 long  int nimba,starthouse,endhouse,repeat,total;
 int i;
   char ch;
   clrscr();
   king.goldlooted=500;
   for(i=0;i<size;i++)
   {
       hous[i].goldinhouse=500;
   }
   printf("Have you looted first y/n:\n");
   scanf("%c",&ch);
      if(ch=='y'||ch=='Y')
      {
	 printf("Enter The start house number");
	 scanf("%ld",&starthouse);
	 printf("Enter The end house number");
	 scanf("%ld",&endhouse);
	 printf("Enter how many houses  you have looted");
	 scanf("%d",&repeat);
	     if(starthouse<=size && endhouse<=size)
	     {
		for(i=starthouse;i<=endhouse;i++)
		{
		     if(king.lootedhouse!=1)
		     {
			king.goldlooted++;
			king.lootedhouse=1;
			nimba++;
		     }
		     else
		     {
		      king.goldlooted--;
		      king.lootedhouse=1;
		      nimba++;

		     }


		}
	     }
	     total=king.goldlooted-repeat;
	     printf("\nTotal Nimba Looted=%ld",nimba);
	     printf("\nTotal  Gold looted=%ld",total*500);
	     printf("\nTotal Numbers of house looted=%ld",endhouse-starthouse);
      }
      else
      {
	 printf("Enter The start house number");
	 scanf("%ld",&starthouse);
	 printf("Enter The end house number");
	 scanf("%ld",&endhouse);
	     if(starthouse<=size && endhouse<=size)
	     {
		for(i=starthouse;i<=endhouse;i++)
		{
		     if(king.lootedhouse!=1)
		     {
			king.goldlooted++;
			king.lootedhouse=1;
			nimba++;
		     }
		     else
		     {
		      king.goldlooted--;
		      king.lootedhouse=1;
		      nimba++;

		     }


		}
	     }
	     printf("\nTotal Nimba Looted=%ld",nimba);
	     printf("\nTotal  Gold looted=%ld",king.goldlooted*500);
	     printf("\nTotal Numbers of house looted=%ld",endhouse-starthouse);
      }
getch();
}