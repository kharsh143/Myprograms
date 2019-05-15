#include<stdio.h>
#include<conio.h>
#define size 5
void push(int );
int pop();
int isEmpty();
int isFull();
void peek();
void traverse();
int stack[size],top=-1;
int main()
{
int ch,item;
clrscr();
    while(1)
    {
	printf("\nenter the number\n1.push\n2.pop\n3.peek\n4.traverse\n5.exit");
	scanf("%d",&ch);
	  switch(ch)
	  {
	    case 1:printf("enter the element");
		    scanf("%d",&item);
		    push(item);
	    break;
	    case 2: item=pop();
		    if(item==0)
		    {
		      printf("stack is empty");
		    }
		    else
		    {
		    printf("podded element is %d",item);
		    }
	  break;
	  case 3: peek();
	  break;
	  case 4:traverse();
	  break;
	  case 5:exit(0);
	  break;
	  default:printf("enter the correct number");


	  }

    }
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
	    printf("%d is pushed",ele);

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
	printf("stack is empty");
	}
	else
	{
	printf("peek element is %d",stack[top]);
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
	for(i=top;i>=0;i--)
	{
	printf("%d\n",stack[i]);
	}
	}
}
