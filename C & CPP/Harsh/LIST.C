#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


   struct node
   {
     int data;
     struct node *next;
   };
   struct node *head;
   void display();


    struct  node *first=NULL;
    struct  node *second=NULL;
    struct  node *third=NULL;
     struct  node *fourth=NULL;

void main()
{
clrscr();
     head=NULL;

     first=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
     third=(struct node *)malloc(sizeof(struct node));
     fourth=(struct node *)malloc(sizeof(struct node));

     first->data=10;
     second->data=20;
     third->data=30;
     fourth->data=40;

     first->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=NULL;
     head=first;
     display();
     getch();
}
void display()
{
  struct node *temp;
  temp=head;
  if(temp==NULL)
  {
   printf("Link is Empty");
  }
  else
  {

    while(temp!=NULL)
    {
      printf("%d\t",temp->data);
      temp=temp->next;
    }
  }
}
