#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void append();
void display();

    struct node
    {
      int data;
	struct node* link;
    };
    struct node* root;


void main()
{
  int ch;
  clrscr();


     while(1)
     {
       printf("\n1.Append\n2.Display\n3.Exit");
       scanf("%d",&ch);

	  switch(ch)
	  {
	    case 1: append();
	    break;
	    case 2: display();
	    break;
	    case 3:exit(0);
	    break;
	    default:printf("Enter The Valid Number");
	    break;

	  }



     }


}

void append()
{
   struct node* temp;
   temp=(struct node *)malloc(sizeof(struct node));
   printf("Enter The Data Node");
   scanf("%d",&temp->data);
     temp->link=NULL;
     if(root==NULL)
     {
      root=temp;
     }
     else
     {
       struct node* p;
	 p=root;
	 while(p->link!=NULL)
	 {
	   p=p->link;

	 }
       p->link=temp;
     }

}
void display()
{
  struct node* temp;
  temp=root;
  if(temp==NULL)
  {
  printf("Link is Empty");
  }
  else
  {
    while(temp!=NULL)
    {
     printf("%d\t",temp->data);
     temp=temp->link;
    }

  }

}