#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	struct node
	{
	int data ;
	struct node* link;
	};
	struct node* root;
void append();
int length();
void addatbegin();
void addatafter();
void display();
void delete();

void main()
{

int ch;
	while(1)
	{

	printf("Linked List\n1.append\n2.AddatBegin\n3.Addatafter\n4.length\n5.display\n6.delete\n7.Quit\n");
	printf("Enter your choice");
	scanf("%d",&ch);
		switch(ch)
		{

		  case 1: append();
		  break;
		  case 2: addatbegin();
		  break;
		  case 3: addatafter();
		  break;
		  case 4: length();
		  break;
		  case 5:display();
		  break;
		  case 6: delete();
		  break;
		  case 7: exit(0);
		  break;
		  default :printf("Enter The Valid number");


		}

	}

}


void append()
{
     struct node*  temp ;
     temp=(struct node *)malloc (sizeof(struct node));
     printf("%d",&temp->data);
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


int  length()
{
   int count=0;
   struct node* temp;
   temp=root;

	while(temp!=NULL)
	{
	count++ ;
	temp=temp->link;
	}
	return count;

}

void addatbegin()
{
  struct node* temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter The data");
  scanf("%d",&temp->data);
  temp->link=NULL;

     if(root==NULL)
     {
      root=temp;

     }

     else
     {

       temp->link=root;
       root=temp;


     }


}
void display()
{



}
void delete()
{



}
void addatafter()
{




}