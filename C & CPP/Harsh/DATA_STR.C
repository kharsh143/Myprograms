#include<stdio.h>
#include<conio.h>
#define size 5
//int isFull();
  struct stack
  {
   int arr[size];
   int top;
  };
typedef struct stack STACK;
STACK s;
void push(void);
void main()
{
clrscr();
s.top=-1;
push();
push();
push();
}
void push()
{
int num,i;
  if(s.top==size-1)
    {
    printf("Stack is Full....!!!!!!");
    }
  else
    {
    printf("enter the element to be pushed\n");
    scanf("%d",&num);
    s.top=s.top+1;
    s.arr[s.top]=num;
  }
  for(i=s.top;i>=0;i--)
  {
  printf("%d\n",s.arr[i]);
  }
}