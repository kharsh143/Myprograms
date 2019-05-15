#include<stdio.h>
#include<conio.h>
#define size 5
char stack[size],top=-1;
void push(char name[10]);
char pop(char n[10]);
int isEmpty();
int isFull();
void peek();
void traverse();

void main()
{
int ch;
char item[10];
clrscr();
  while(1)
  {
  printf("\nEnter The Number\n1.Push\n2.Pop\n3.Peek\n4.Traverse\n5.Exit\n");
  scanf("%d",&ch);
     switch(ch)
     {
     case 1:printf("Enter the number");
	    scanf("%s",&item);
	    push(item);
	  //  printf("%s is pushed",item);
     break;
     case 2: pop(item);
	      if(item==0)
	      {
	      printf("Stack is Empty");
	      }
	      else
	      {
	      printf("%s is Popped",item);
	      }
     break;
     case 3:peek();
     break;
     case 4:traverse();
     break;
     case 5:exit(0);
     break;
     default:printf("Enter The Valid Number");

     }

  }

}
void push(char name[10])
{
	 if(isFull())
	 {
	 printf("Stack is full....!!!!!!!");
	 }
	 else
	 {
	 top++;
	 stack[top]=name;
	 printf("%s is Pushed",name);
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
char pop(char n[10])
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
	 printf("Stack is Empty");
	 }
	 else
	 {
	 printf("%s is peeked",stack[top]);
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
	    printf("%s\n",stack[i]);
	    }
	 }
}