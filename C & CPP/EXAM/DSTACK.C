#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

   struct node
   {
     int data;
     struct node *link;
   };
   struct node *start,*end;
void push();
void pop();
void display();


void main()
{

int ch;
clrscr();
    while(1)
    {
      printf("\nEnter Your Choice\n1.add\n2.pop\n3.display\n4.exit");
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
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter The Number");
  scanf("%d",&temp->data);
    if(start==NULL&&end==NULL)
    {
      start=temp;
      end=temp;
    }
    else
    {
      end->link=temp;
      end=temp;
    }

}
void pop()
{
struct node *temp;
temp=start;
   if(start==NULL)
   {
      printf("Queue Is Empty");
   }
   else
   {
     printf("%d",temp->data);
     start=start->link;
   }


}
void display()
{
  struct node *temp;
  temp=start;
  if(start==NULL)
  {
   printf("Queue IS Empty");
  }
  else
  {
    while( temp!=NULL)
    {
      printf("%d\n",temp->data);
      temp=temp->link;
    }
  }

}