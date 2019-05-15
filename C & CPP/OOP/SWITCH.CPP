#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void nanr();
void wanr(int , int);
int nawr();
int wawr(int ,int );

void main()

{
  int n,n1,n2,n3,n4,t1;
  clrscr();
  while(1)
  {
  printf("\nEnter your Choice\n1.No Arugument No return Value\n2.With Arugment No return Value\n3.No Argument With return Value\n4.With Argument With Return Value\n5.ClearScreen\n6.Exit");
  scanf("%d",&n);
	switch(n)
	{
	  case 1:nanr();
	  break;

	  case 2: cout<<"Enter The Two Numbers";
		  cin>>n1>>n2;
		  wanr(n1,n2);
	  break;
	  case 3: t1=nawr();
	  cout<<"The Addition is "<<t1;
	  break;
	  case 4: cout<<"Enter The Two Numbers";
		  cin>>n3>>n4;
		  cout<<"the addition is "<< wawr(n3,n4);
	  break;
	  case 5:clrscr();
	  break;
	  case 6:exit(0);
	  break;
	  default:cout<<"Enter The Valid Number";
	}
   }
//getch();
}

void nanr()
{
   int a,b;
   cout<<"Enter Two Numbers";
   cin>>a>>b;
   cout<<"The Addition Is :"<<a+b;


}

void wanr(int x,int y)
{
   cout<<"the addition is "<< x+y;


}
int nawr()
{
int a,b,c;

   cout<<"Enter Two Numbers";
   cin>>a>>b;
 c=a+b;
 return(c);


}
int wawr(int x,int y)
{
   int temp=x+y;
   return(temp);

}