#include<stdio.h>
#include<conio.h>
#define size 5
void push(char name[10]);
void display();
int pop();
void peek();
int stack[size],top=-1;
void main()
{
  int ch;
  char item[10];
  clrscr();
    while(1)
    {
       printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
       scanf("%d",&ch);
	 switch(ch)
	 {
	   case 1:printf("\nEnter The Number");
		  scanf("%s",item);
		  push(item);
		  printf("\n%s is Inserted \n",item);
	   break;
	   case 2:item=pop();
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
	   case 4:display();
	   break;
	   case 5:exit(0);
	   break;
	   default:printf("Enter The Valid Number");
	   break;


	 }


    }


}
void push(char name[10])
{
   if(top==size-1)
   {
    printf("The Stack is Full............!!!!!!!!!!");

   }
   else
   {
      top++;
      stack[top]=name;

   }

}
int pop()
{
  if(top==-1)
  {
   printf("Stack Is Empty............!!!!!!!!!!!!!!");

  }

  else
  {
    int temp;
    temp=stack[top];
    top--;
    return(temp);


  }

}
void peek()
{
  if(top==-1)
  {
     printf("Stack is  Empty.............!!!!!!!!!!!!!!");

  }
  else
  {
     printf("%s is Peeked String",stack[top]);

  }

}
void display()
{
  int i;
  for(i=0;i<top;i++)
  {
    printf("%s\n",stack[i]);
  }

}