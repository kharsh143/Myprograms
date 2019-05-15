#include<stdio.h>
#include<conio.h>
#define size 200

	struct kingtreasure
	{
	long int goldlooted;
	long int lootedhouses;
	};
	struct people
	{
	long int goldpeople;
	long int islooted;
	long int isissuegold;
	};
	struct houses
	{
	long int house;
	long int goldinhouse;
	};

void main()
{
  char check;
  int i,start,end,repeat;
  int nimba,starthouse,endhouse;
struct people peopl[size];
struct kingtreasure king;
struct houses hous[size];
  clrscr();
  printf("Enter The start house number");
  scanf("%d",&start);
  printf("Enter the End House number");
  scanf("%d",&end);
    printf("Have U looted First press y if yes otherwise n\n");
    scanf("%c",&check);
       if(check=='y'||check=='Y')
       {
	  printf("Enter How Many house U Looted");
	  scanf("%d",&repeat);
	  king.lootedhouses=(start+end)-repeat;
       }
       else
       {
	 king.lootedhouses=200;
       }
  for(i=0;i<=size;i++)
  {
     hous[i].house=0;
  }
  for(i=start;i<=end;i++)
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




   printf("Gold looted =%d\n",king.goldlooted);
   printf("Nimba = %d\n",nimba);
   printf("No of peoples looted = %d\n",endhouse-starthouse);



  getch();
}