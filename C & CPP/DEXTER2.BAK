#include<stdio.h>
#include<conio.h>
#define maxamt 5000
void main()
{
int money,minhun,minfif,minten,money5,mon2;
int rs1=1;
clrscr();
printf("enter the amount:");
scanf("%d",&money);
   if(money>0 && money<maxamt)
   {
    if(money>100 && money<maxamt)
     {
     minhun=money/100;
    money=money-minhun*100;
    printf("100rs notes=%d",minhun);
      if(money>50 && money<100)
      {
      minfif=money/50;
      money=money-minfif*50;
      printf("50rs notes =%d",minfif);
	if(money>10 && money<50)
	{
	minten=money/10;
	money=money-minten*10;
	printf("10rs notes=%d",minten);
	  if(money>5 && money<10)
	  {
	  money5=money/5;
	  money=money-money5*5;
	  printf("5rs notes =%d",money5);
	    if(money>2 && money<5)
	    {
	    mon2=money/2;
	    money=money-mon2*2;
	    printf("2 rs notes =%d",mon2);
	      if(money>1 && money<=2)
	      {
	      printf("1 rs note =%d",rs1);
	      } //1rs
	    }  //2rs
	  }   //5rs
	} //10rs
      } //50rs
     } //100rs
    }  //checking
getch();
}