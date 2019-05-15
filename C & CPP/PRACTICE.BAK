#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;
void  push ();
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
	default:printf("Enter the valid number");
	break;
      }
 }

}
void push()
{
   int item;
   if(top==size-1)
   {
    printf("Stack is Full.............!!!!!!!!!!!!");
   }
   else
   {
   printf("Enter the element :-");
   scanf("%d",&item);
     top++;
     stack[top]=item;
     printf("%d is pushed element",stack[top]);

   }
}
void pop()
{
    if(top==-1)
    {
      printf("Stack is Empty");
    }
    else
    {
    printf("%d is popped ",stack[top]);
    top--;
    }

}

void display()
{
int i;
   if(top==-1)
   {
    printf("Stack is Empty");
   }
   else
   {
      for(i=top;i>=0;i--)
      {
       printf("%d\t",stack[i]);
      }
   }


}