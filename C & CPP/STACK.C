#include<stdio.h>
#include<conio.h>
#define size 5
void push(int);
int pop();
void peek();
void traverse();
int stack[size],top=-1;

void main()
{
  int ch,item;
clrscr();
	do
	{
	  printf("\n1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Exit\n");
	  scanf("%d",&ch);

		switch(ch)
		{

		  case 1: printf("Enter The Elements");
			  scanf("%d",&item);
			  push(item);
		  break;

		  case 2: pop(item);

		  break;
		  case 3: peek();
		  break;
		  case 4: traverse();
		  break;
		  case 5: exit(0);
		  break;
		  default: printf("Enter The Valid Number");



		}




	} while(ch!=5);


}


void push(int ele)
{
	if(top==size-1)
	{
	printf("Stack is Full........!!!!!!");
	}

	else
	{
	  top=top+1;
	  stack[top]=ele;
	  printf("The Element %d is Pushed",ele);

	}

}

int pop(int n)
{

  if(top==-1)
  {
  printf("Stack Is Empty ..........!!!!!!!!!!!");
  }
  else
  {
    return (stack[top--]);
      printf("The Popped Element Is %d",n);

  }

}
void peek()
{
     if(top==-1)
     {
     printf("Stack is Empty");

     }
     else
     {
     printf("The Peek Element is %d",stack[top]);
     }

}
void traverse()
{
	int i;
	if(top==-1)
	{
	printf("Stack is Empty");
	}

	else
	{
	  for(i=0;i<=top;i++)
	  {
	   printf("%d \t",stack[i]);
	  }
	}

}