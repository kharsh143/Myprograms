#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	struct node
	{
	   int data;
	   struct node * link;
	};
	struct node *top;
  void push();
  void pop();
  void display();

void main()
{
   int ch;
   clrscr();
     while(1)
     {
	printf("\nEnter Your Choice\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	scanf("%d",&ch);

	  switch(ch)
	  {
	    case 1:push();
	    break;
	    case 2:pop();
	    break;
	    case 3:display();
	    break;
	    case 4:exit(0);
	    break;
	    default:printf("Enter The Valid Number");

	  }


     }

}

void push()
{
  int data;
   struct node *temp;
   temp=(struct node *)malloc(sizeof(struct node));
   printf("Enter The Number");
   scanf("%d",&data);
   temp->data=data;
   temp->link=top;
   top=temp;

}
void pop()
{
struct node *temp;
   if(top==NULL)
   {
     printf("Stack Is Empty");
   }
   else
   {
     temp=top;
     printf("%d is Popped",temp->data);
     top=top->link;
   }

}
void display()
{
 struct node *temp;
 if(top==NULL)
 {
  printf("Stack Is Empty");
 }

   temp=top;
   while(temp!=NULL)
   {
   printf("%d \t",temp->data);
   temp=temp->link;
   }
}