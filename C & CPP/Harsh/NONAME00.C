#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	struct node
	{
	   int data;
	   struct node* link;

	};
	struct node* top=NULL;

void push(int);
void pop();
void display();

void main()
{
 int ch,item;
 clrscr();

	while(1)
	{
	 printf("\n1.Push\n2.Display\n3.Pop\n4.Exit\n");
	 scanf("%d",&ch);

	     switch(ch)
	     {
	       case 1:printf("Enter The Number");
		      scanf("%d",&item);
		      push(item);
	       break;
	       case 2:display();
	       break;
	       case 3:pop();
	       break;
	       case 4:exit(0);
	       break;
	       default:printf("Enter The Valid Number");
	       break;


	     }//Switch Case Close Brace


	}//While Loop Close Brace


}// Main function Close Brace


void push(int n)
{
  struct node temp;

}