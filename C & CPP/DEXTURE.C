#include<stdio.h>
#include<conio.h>
#define size 200
	struct kingtreasure
	{
	int goldlooted;
	int lootedhouses;
	};
	struct people
	{
	int goldpeople;
	int islooted;
	int isissuegold;
	};
	struct houses
	{
	int house;
	int goldinhouse;
	};
void main()
{
char ch;
int nimba,i,starthouse,endhouse;
struct people peopl[size];
struct kingtreasure king;
struct houses hous[size];
clrscr();
   for(i=0;i<size;i++)
   {
     hous[i].goldinhouse=500;
   }
   //checking he wants to loot houses or not
   printf("Do u want to loot house if yes press y:\n");
   scanf("%c",&ch);
   if(ch=='y')
   {
     printf("Enter Start house no to loot");
     scanf("%d",&starthouse);
     printf("Enter the Last house for house");
     scanf("%d",&endhouse);
       if(starthouse<size && endhouse<=size)
       {
	 for(i=starthouse;i<=endhouse;i++)
	 {
	  if(peopl[i].islooted!=1)
	  {
	  peopl[i].goldpeople++;
	  king.goldlooted++;
	  nimba++;
	  peopl[i].islooted=1;
	  hous[i].goldinhouse=0;
	  }
	  else
	  {
	  peopl[i].goldpeople--;
	  king.goldlooted++;
	  nimba++;
	  peopl[i].islooted=1;
	  hous[i].goldinhouse=0;
	  }
	 }
       }

   }

   printf("Gold looted =%d\n",king.goldlooted);
   printf("Nimba = %d\n",nimba);
   printf("No of peoples looted = %d\n",endhouse-starthouse);
   getch();
 }

