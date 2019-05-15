#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

   struct node
   {
     int data;
     struct node *link;
   }*start,*end;
void dequeue();
void enqueue();
void display();

void main()
{
  int ch;
  clrscr();
     while(1)
     {
	printf("\nEnter The Choice\n1.add\n2.delete\n3.display\n4.exit\n");
	scanf("%d",&ch);

	  switch(ch)
	  {
	    case 1:enqueue();
	    break;
	    case 2:dequeue();
	    break;
	    case 3:display();
	    break;
	    case 4:exit(0);
	    break;
	    default:printf("Enter The valid Number");

	  }

     }


}
void enqueue()
{
  int item;
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter The Number");
scanf("%d",&item);
temp->data=item;
temp->link=NULL;

if(start==NULL&&end==NULL)
{
  start=temp;
}
else
{
 end->link=temp;
}
end=temp;
}
void dequeue()
{
  if(start==NULL)
  {
   printf("Queue Is Empty");
  }
  else
  {
  struct node *temp;
  temp=start;
  printf("%d Is Dequeue Element",temp->data);
  start=start->link;

  }

}
void display()
{
  if(start==NULL)
  {
   printf("Queue Is Empty");
  }
  else
  {
   struct node *temp;
   temp=start;
    while(temp!=NULL)
    {
      printf("%d\n",temp->data);
      temp=temp->link;
    }
  }

}