#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

   struct node
   {
      int data;
      struct node *link;
   };
   struct node *top=NULL;
   void pop();
   void push();
   void display();
void main()
{
    int ch;
    clrscr();
    while(1)
    {
      printf("1add\n2.rem\n3.dis\n4.exit\n");
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
	  default:printf("Enter Valid Number");


      }
    }

}
void push()
{
struct node *temp=malloc(sizeof(struct node));
   printf("Enter The Number");
   scanf("%d",&temp->data);
     temp->link=top;
     top=temp;

}
void pop()
{
   struct node * temp;
   temp=top;
   if(top==NULL)
   {
     printf("Stack Is Empty");
   }
   else
   {
      printf("%d Is Popped",temp->data);
      top=top->link;
   }
}

void display()
{
   struct node * temp;
    temp=top;
    if(temp==NULL)
    {
     printf("Stack Is Empty");
    }
    else
    {
       while(temp!=NULL)
       {
	  printf("%d",temp->data);
	  temp=temp->link;
       }
    }
}