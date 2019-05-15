#include<stdio.h>
#include<conio.h>
#define size 5
int queue[size];
int start=0,end=0,count=0;
void enqu();
void dequ();
void display();
void main()
{
  int ch;
  clrscr();
  while(1)
  {
     printf("\n1,2,3,4\n");
     scanf("%d",&ch);
	switch(ch)
	{
	  case 1:enqu();
	  break;
	  case 2:dequ();
	  break;
	  case 3:display();
	  break;
	  case 4:exit(0);
	  break;
	  default:printf("Enter The Valid Number");

	}

  }


}
void enqu()
{
   int item;
   if(count==size)
   {
   printf("Queue is Full");
   }
   else
   {
   printf("Enter The NUmber");
   scanf("%d",&item);
    queue[end]=item;
    end=(end+1)%size;
    count++;
    printf("%d is Pushed",item);
   }

}
void dequ()
{
  if(count==0)
  {
  printf("Queue is Empty\n");
  }
  else
  {
   printf("%d is popped",queue[start]);
   start=(start+1)%size;
   count--;
  }

}
void display()
{
  int i,j;
  j=count;
  if(count==0)
  {
     printf("Queue is Empty");
  }
  else
  {
    for(i=start;j!=0;j--)
    {
      printf("%d\n",queue[i]);
	i=(i+1)%size;
    }

  }


}