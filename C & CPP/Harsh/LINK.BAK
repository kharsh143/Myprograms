#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void append();
void addatbegin();
void addatafter();
int length();
void display();
void del();

	struct node
	{
	  int data;
	  struct node* link ;
	};

	struct node* root=NULL ;
     int len;
void main()
{
int   ch;
clrscr();
    while(1)
    {
     printf("\nSingle Linked list Operation:\n1.Append\n2.Addatbegin\n3.Addatafter\n4.Length\n5.Display\n6.Delete\n7.Quit");
     printf("\n Enter your Choice");
     scanf("%d",&ch);


	  switch(ch)
	  {
	  case 1:  append();
	  break;
	  case 2:  addatbegin();
	  break;
	  case 3:  addatafter();
	  break;
	  case 4:len=length();
		 printf("length is %d",len);
	  break;
	  case 5: display();
	  break;
	  case 6: del();
	  break;
	  case 7: exit(0);
	  break;
	  default:printf("Enter the valid number");

	  }
    }

}

void append()
{
   struct node* temp;
   temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter node data:\n");
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
	    p=p-> link;
	  }

	  p->link=temp;

      }
}

int length()
{
    int count=0;
     struct node* temp;
     temp=root;
     while(temp!=NULL)
     {
       count++;
      temp= temp->link;

     }
     return count;

}


void display()
{
     struct node* temp;
     temp=root;
     if(temp==NULL)
     {
     printf("List is empty \n");

     }
     else
     {

	while(temp!=NULL)
	{
	 printf("%d\t",temp->data);
	 temp=temp->link;
	}
	printf("\n\n");
     }
}

void addatbegin(){

struct node* temp;
  temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter node data:\n");
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
void addatafter()
{
int pos,nodectr,ctr=1;
struct node*temp,*tmp,*prev;
  temp=(struct node*) malloc(sizeof(struct node));
    printf("Enter node data:\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    printf("Enter the position\n ");
    scanf("%d",&pos);
    nodectr=length(root);
    if(pos>1 && pos<nodectr)
    {
      tmp=prev=root;
      while(ctr<pos)
      {
	 prev =tmp;
	  tmp=tmp->link;
	  ctr++;

      }

      prev->link=temp;
      temp->link=tmp;
    }

     else
     {
     printf("\n position is %d dosenot exists",pos);
     }

}
void del()
{
   //  printf("this is harsh");
}