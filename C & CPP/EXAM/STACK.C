#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size],top=-1;
void push();
void pop();
void display();
void peek();
void main()
{
  int ch;
  clrscr();
     while(1)
     {
      printf("\nEnter Your Choice\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
      scanf("%d",&ch);
	 switch(ch)
	 {
	   case 1:push();
	   break;
	   case 2:pop();
	   break;
	   case 3:display();
	   break;
	   case 4:peek();
	   break;
	   case 5:exit(0);
	   break;
	   default:printf("Entered Number Is Not Valid");

	 }
     }

}
void push()
{
   int item;
     if(top==size-1)
     {
      printf("Stack Is FULL...........!!!!!!!!!");
     }
     else
     {
       printf("Enter The Number");
       scanf("%d",&item);
       top++;
       stack[top]=item;
	printf("%d is Pushed\n",stack[top]);
     }

}
void pop()
{
  if(top==-1)
  {
   printf("Stack Is Empty...............!!!!!!!!!!!!!!");
  }
  else
  {
    printf("%d is Popped",stack[top]);
    top--;

  }
}
void display()
{
  int i;
   if(top==-1)
   {
    printf("Stack Is Empty");
   }
   else
   {
     for(i=top;i>=0;i--)
     {
       printf("%d\t",stack[i]);
     }
   }

}

void peek()
{
  if(top==-1)
  {
    printf("Stack Is Empty");
  }
  else
  {
    printf("%d Is Peek Element",stack[top]);
  }

}