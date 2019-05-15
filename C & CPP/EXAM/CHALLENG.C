#include<stdio.h>
#include<conio.h>
int a[10],i,j;
void take();
void display();
void main()
{
clrscr();
take();
display();

getch();
}
void take()
{

  printf("Enter The Numbers");
      for(i=0;i<10;i++)
      {
	scanf("%d",&a[i]);
      }

}
void display()
{
    printf("The Most Repeated Values Are\n");
      for(i=0;i<10;i++)
      {
       for(j=i+1;j<10;j++)
       {
	 if(a[i]==a[j])
	 {
	    printf("%d\t",a[i]);
	 }
      }

     }
}