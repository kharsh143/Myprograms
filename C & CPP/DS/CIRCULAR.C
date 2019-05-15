#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
#include<stdlib.h>
	struct node
	{
	  int data;
	  struct node* link;

	};
	struct node *head=NULL,*x,*y,*z;
	void create();
	void ins_beg();
	void ins_pos();
	void del_beg();
	void del_pos();
	void display();
void main()
{

  int ch;
  clrscr();
	while(1)
	{
	  pf("\n1.insert beg\n2.insert mid\n3.delete beg\n4.delete mid\n5.display\n6.exit");
	  sf("%d",&ch);
		switch(ch)
		{
		  case 1:ins_beg();
		  break;
		  case 2:ins_pos();
		  break;
		  case 3:del_beg();
		  break;
		  case 4:del_pos();
		  break;
		  case 5:display();
		  break;
		  case 6:exit(0);
		  break;

		   default :pf("Enter The Valid Number");
		}


	}

}
void ins_beg()
{
   int data;
   x=head;
   y=(struct node *)malloc(sizeof(struct node));
   pf("Enter The Data");
   sf("%d",&data);
   y->data=data;
      while(x->link!=head)
      {
       x=x->link;

      }
      x->link=y;
      y->link=head;
      head=y;


}
void ins_pos()
{
  struct node *ptr;
  int c=1;
  int pos,count=1;
  y=(struct node*)malloc(sizeof(struct node));
  if(head==NULL)
  {
   pf("Cannot Entered The Element");
  }

  printf("\nEnter Data");
  sf("%d",&y->data);
  pf("Enter Position\n");
  sf("%d",&pos);
  x=head;
  ptr=head;
  while(ptr->link!=head)
  {
    count++;
    ptr=ptr->link;
  }
  count++;
  if(pos>count)
  {
   pf("Out OF Bound");
  }
  while(c<pos)
  {
   z=x;
   x=x->link;
   c++;

  }
  y->link=x;
  z->link=y;


}
void del_beg()
{
  if(head==NULL)
  {
     pf("List Is Empty");
  }
  else
  {
    x=head;
    y=head;
       while(x->link!=head)
       {
	  x=x->link;
       }
       head=y->link;
       x->link=head;
       free(y);

  }

}
void del_pos()
{
  if(head==NULL)
  {
   pf("List Is Empty");
  }
  else
  {
     int c=1;
     int pos;
     pf("Enter Position To Delete");
     sf("%d",&pos);
     x=head;
       while(c<pos)
       {
	 y=x;
	 x=x->link;
	 c++;
       }
       y->link=x->link;
       free(x);
  }
}
void display()
{
   if(head==NULL)
   {
       pf("List Is Empty");
   }
   else
   {
     x=head;
       while(x->link!=head)
       {
	   pf("%d",x->data);
	   x=x->link;
       }
   }

}