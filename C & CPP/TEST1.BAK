#include<stdio.h>
#include<conio.h>
#define size 5
void push (int ele);
int pop();
void display();
int stack[size],top=-1;
void main()
{
  int ch,item;
  clrscr();
	while(1)
	{
	   printf("\nEnter ur choice\n1.push\n2.pop\n3.display\n4.exit");
	   scanf("%d",&ch);
	      switch(ch)
	      {
		 case 1:printf("Enter The Number");
			scanf("%d",&item);
			  push(item);
		 break;
		 case 2: item=pop();
			 if(item==0)
			  {
			   printf("Stack is Empty");
			  }
			  else
			  {

			  printf("%d is Popped Element",item);
			  }
		 break;
		 case 3:display();
		 break;
		 case 4:exit(0);
		 break;
		 default:printf("Enter The Valid Number");
		 break;


	      }




	}

}

void push (int ele)
{

    if(top==size-1)
    {
      printf("Stack is Full......!!!!!!");


    }
    else
    {
     top++;
     stack[top]=ele;
     printf("%d is Pushed",ele);


    }


}

int pop()
{
    if(top==-1)
    {
    return(0);
    }
    else
    {
      return (stack[top--]);
    }

 return 0;
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
    printf("%d",stack[i]);
    }

  }


}