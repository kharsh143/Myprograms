#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size],top=-1;
void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void traverse();
void main()
{
int ch,item;
clrscr();
while(1)
{
printf("\nenter the number\n1.Push\n2.pop\n3.peek\n4.traverse\n5.exit\n");
scanf("%d",&ch);
ch=getch();
  switch(ch)
  {
	case 1: printf("enter the element");
		scanf("%d",&item);
		push(item);
	break;
	case 2:item=pop();
		if(item==0)
		{
		printf("stack is underflow");

		}
		else
		{
		printf("podded element id %d",item);
		}
	break;
	case 3:peek();
	break;
	case 4:traverse();
	break;
	case 5:exit(0);
	break;
	default :printf("Wrong Input");


  }




}//while loop close
}
  void push(int ele)
  {
	if(isFull())
	{
	printf("stack is full");
	}
	else
	{
	top++;
	stack[top]=ele;
	printf("element is %d  pushed",ele);
	}
  }
int  isFull()
  {
	if(top==size-1)
	{
	return 1 ;
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
	return 0   ;
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
	printf("peek element : %d \n",stack[top]);
	}
}
void traverse()
{
	if(isEmpty())
	{
	printf("stack is empty");
	}
	else
	{
	int i;
	printf("stack elements are :\n");
	for(i=0;i<=top;i++)
	{
	printf("%d\t",stack[i]);
	}

	}
}