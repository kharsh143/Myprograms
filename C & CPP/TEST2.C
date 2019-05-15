#include<stdio.h>
#include<conio.h>
	struct node
	{
	   int data;
	   struct node *link;

	};
	struct node* top=NULL;
void push(int ele);
void pop();
void display();

void main()
{
   int ch,item;
   clrscr();
       while(1)
       {
       printf("\nEnter ur choice\n1.push\n2.pop\n3.display");
       scanf("%d",&ch);

	   switch(ch)
	   {
	      case 1:printf("Enter The Number");
		     scanf("%d",&item);
		     push(item);
	      break;
	      case 2:pop();
	      break;
	      case 3:display();
	      break;
	      case 4:exit(0);
	      break;
	      default:printf("Enter The valid Number");


	   }
       }
}

void push(int ele)
{
   struct node* temp;
   temp=(struct node *)malloc(sizeof(struct node));
   temp->data=ele;
   temp->link=top;
   top=temp;
   printf("%d is Popped",ele);


}

void pop()
{
   struct node* temp;
   if(top!=NULL)
   {
   temp=top;
   top=top->link;
   printf("%d is popped",temp->data);
   free(temp);
   }
}

void display()
{

   struct node * temp;
   temp=top;
      while(temp!=NULL)
      {
	printf("%d\t",temp->data);
	temp=temp->link;
      }

}