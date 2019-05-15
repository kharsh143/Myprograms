#include<stdio.h>
#include<conio.h>
#define size 5
void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void traverse();
int stack[size],top=-1;

void main()
{
int ch,item;
clrscr();
	while(1)
	{
		printf("\nEnter Your Choice\n1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Exit\n");
		scanf("%d",&ch);
			switch(ch)
			{
			  case 1:printf("Enter The Element");
				 scanf("%d",&item);
				 push(item);
			  break;
			  case 2:item=pop();
				  if(item==0)
				  {
				  printf("Stack is Empty");
				  }
				  else
				  {
				  printf("Popped Element is %d",item);
				  }
			  break;
			  case 3: peek();
			  break;
			  case 4:traverse();
			  break;
			  case 5: exit(0);
			  break;
			  default:printf("Enter The Valid Number");


			}
	}
}


void push(int ele)
{
     if(isFull())
     {
     printf("Stack is Full");
     }
     else
     {
	top++;
	stack[top]=ele;
	printf("%d is Pushed",ele);
     }

}

int isFull()
{
    if(top==size-1)
    {
      return 1;
    }
    else
    {
      return 0;
    }


}

int pop()
{
   if(isEmpty())
   {
   return 0;
   }
   else
   {
   return stack[top--];
   }


}
int isEmpty()
{
  if(top==-1)
  {
  return 1;
  }
  else
  {
  return 0;
  }

}
void peek()
{
    if(isEmpty())
    {
    printf("Stack is empty");
    }
    else
    {
    printf("Peek Element is %d",stack[top]);
    }


}

void traverse()
{
   if(isEmpty())
   {
     printf("Stack is Empty");

   }
   else
   {
   int i;
   for(i=0;i<=top;i++)
   {
   printf("%d\t",stack[i]);
   }
   }

}