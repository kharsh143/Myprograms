#include<stdio.h>
#include<conio.h>
void half_tea(int);
void tea(int);
void half_coffee(int);
void coffee(int);
void half_boost(int);
void boost(int);
void selectmany();


void main()
{
int item,n;
clrscr();
printf("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("   @                                 @\n   ");
printf("@                                 @\n   ");
printf("@            WELCOME              @\n   ");
printf("@              TO                 @\n   ");
printf("@           INDIA TEA             @\n   ");
printf("@                                 @\n   ");
printf("@                                 @\n   ");
printf("@                                 @\n   ");
printf("@                                 @\n   ");
printf("@                                 @\n   ");
printf("@                                 @\n   ");
printf("@                                 @\n   ");
printf("@                                 @\n   ");
printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    while(1)
    {  printf("\n\t\t\tSelect The Item\n");
       printf("\t\t\t1.Half-Tea-5rs\n");
       printf("\t\t\t2.Tea-10rs\n");
       printf("\t\t\t3.Half-Coffee-5rs\n");
       printf("\t\t\t4.Coffee-10rs\n");
       printf("\t\t\t5.Half-Boost-10rs\n");
       printf("\t\t\t6.Boost-20rs\n");
       printf("\t\t\t7.Selectmany\n");
       printf("\t\t\t8.Exit\n");
       scanf("%d",&item);

	 switch(item)
	 {
	 case 1:printf("How Many Half-Tea You Want");
		scanf("%d",&n);
		half_tea(n);
	 break;
	 case 2:printf("How Many Tea you Want");
		scanf("%d",&n);

		tea(n);
	 break;
	 case 3:printf("How Many Half Coffee You Want");
		scanf("%d",&n);
		 half_coffee(n);
	 break;
	 case 4:printf("How Many Coffee You Want");
		scanf("%d",&n);
		coffee(n);
	 break;
	 case 5:printf("How Many Half Boost You Boost Want");
		scanf("%d",&n);
		half_boost(n);
	 break;
	 case 6:printf("How Many Boost You Want");
		scanf("%d",&n);
		boost(n);
	 break;
	 case 7: selectmany();
	 break;
	 case 8: exit(0);
	 break;
	 default:printf("enter the valid number");
	 }


    }

}
void half_tea(int num)
{
	printf("\n\nYour Price is %d\n\n",5*num);
	printf("Thanks For Coming ^_^\nHave A Nice Day\n Visit Again");

}
void tea(int t)
{
	printf("\n\nYour price is %d\n\n",10*t);
	printf("Thanks For Coming ^_^\nHave A Nice Day\n Visit Again");

}

void half_coffee(int hc)
{
	printf("\n\nYour price is %d\n\n",5*hc);
	printf("Thanks For Coming ^_^\nHave A Nice Day\n Visit Again");

}
void coffee(int c)
{
	printf("\n\nYour price is %d\n\n",10*c);
	printf("Thanks For Coming ^_^\nHave A Nice Day\n Visit Again");

}
void half_boost(int hb)
{
	printf("\n\nYour price is %d\n\n",10*hb);
	printf("Thanks For Coming ^_^\nHave A Nice Day\n Visit Again");

}
void boost(int b)
{
	printf("\n\nYour price is %d\n\n",20*b);
	printf("Thanks For Coming ^_^\nHave A Nice Day\n Visit Again");

}

void selectmany()
{
int s,half_tea,tea,hc,c,hb,b,total;
      printf("How Many Half-Tea You Want");
      scanf("%d",&s);
      half_tea=s*5;
      printf("How Many Tea You Want");
      scanf("%d",&s);
      tea=s*10;
      printf("How Many Half Coffee You Want");
      scanf("%d",&s);
      hc=s*10;
      printf("How Many Coffee You Want");
      scanf("%d",&s);
      c=s*10;
      printf("How Many Half Boost You Want");
      scanf("%d",&s);
      hb=s*10;
      printf("How Many Boost You Want");
      scanf("%d",&s);
      b=s*20;

      total=half_tea+tea+hc+c+hb+b;
      printf("\n\nThe Total Price is %d\n\n",total);
      printf("Thanks For Coming ^_^\nHave A Nice Day\n Visit Again");

}