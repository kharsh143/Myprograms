#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
    struct node
    {
     int data;
     struct node *link;
    }*root=NULL;
void append();
void addatbegin();
void addatmid();
void deleteatbegin();
void deleteatmid();
void deleteatlast();
int length();
void display();
void main()
{

   int ch;
   clrscr();
      while(1)
      {
	 printf("\nEnter Your choice\n1.Addfi\n2.addmid\n3.addend\n4.length\n5.delfisrt\n6.delmid\n7.delend\n8.display\n9.exit\n");
	 scanf("%d",&ch);
	    switch(ch)
	    {
	      case 1:addatbegin();
	      break;
	      case 2:addatmid();
	      break;
	      case 3:append();
	      break;
	      case 4:length();
	      break;
	      case 5:deleteatbegin();
	      break;
	      case 6:deleteatmid();
	      break;
	      case 7:deleteatlast();
	      break;
	      case 8:display();
	      break;
	      case 9:exit(0);
	      break;
	    }
      }
}
void addatbegin()
{
  struct node *temp,*p;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter The Data");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(root==NULL)
  {
    root=temp;
  }
  else
  {
     p=temp->link;
     temp->link=NULL;
     root=p;


  }
}
void addatmid()
{
   int pos,i;
   struct node *temp,*p;
   temp=(struct node *)malloc(sizeof(struct node));
   printf("Enter The Position");
   scanf("%d",&pos);
   printf("Enter The Data");
   scanf("%d",&temp->data);
    p=root;
   for(i=0;i<pos-1;i++)
   {
     p=p->link;
   }
   p->link=temp;
   temp->link=temp;

}
void display()
{
  struct node *temp;
  temp=root;
  if(root==NULL)
  {
   printf("List Is Empty");
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
void append()
{
  struct node *temp=malloc(sizeof(struct node)),*p;
  printf("Enter The Data");
  scanf("%d",&temp->data);
  temp->link=NULL;
    if(root==NULL)
    {
     root=temp;
    }
    else
    {
     p=root;
       while(p->link!=NULL)
       {
	p=p->link;
       }
       p->link=temp;

    }
}

void deleteatbegin(){}
void deleteatmid(){}
void deleteatlast(){}
int length(){}