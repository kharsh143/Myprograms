#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;


};
struct node *top=NULL;
void push();
void pop();
void display();
void main()
{
  int ch;
  clrscr();
  while(1)
  {
  printf("Enter 1,2,3,4");
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
	default:printf("Enter the valid");
	break;

      }
  }


}


void push()
{
  int item;
  struct node *temp;
  temp=(struct node *)malloc (sizeof(struct node));
  printf("Enter The number");
  scanf("%d",&item);
  temp->data=item;
  temp->link=top;
  top=temp;



}
void  pop()
{
 struct node *temp;
if(top==NULL)
{
 printf("Stack is empty");

}

 temp=top;
 printf("%d is popped",temp->data);
 top=top->link;


}
void display()
{
struct  node *temp;
  if(top==NULL)
  {
  printf("Stack is empty");
  }
  else
  {

  temp=top;
  while(temp!=NULL)
  {
  printf("%d\t",temp->data);
  temp=temp->link;
  }
   }
}