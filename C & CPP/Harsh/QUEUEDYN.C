#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


     struct node
     {
       int data;
       struct node *link;
     };
     struct node *start=NULL,*end=NULL;
     void enqu();
     void dequ();
     void display();

void main()
{
  int ch;
  clrscr();
  while(1)
  {

    printf("1.2.3.4");
    scanf("%d",&ch);
       switch(ch)
       {
	case 1:enqu();
	break;
	case 2:dequ();
	break;
	case 3:display();
	break;
	case 4:exit(0);
	break;
	default :printf("Enter The Valid number");

       }

  }

}

void enqu()
{
  int item;
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter The Elment");
  scanf("%d",&item);
  temp->data=item;
  temp->link=NULL;
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
void dequ()
{
struct node *temp;
    if(start==NULL)
    {
     printf("Queue is Empty");
    }
    else
    {
    temp=start;
    printf("%d is Popped",temp->data);
    start=start->link;

    }
}
void display()
{
  struct node *temp;
  if(start==NULL)
  {
   printf("Queue is Empty");

  }
  else
  {
    temp=start;
    while(temp!=NULL)
    {
     printf("%d \n",temp->data);
	temp=temp->link;
    }
  }


}
