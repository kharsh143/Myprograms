#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int n,i,*p;
clrscr();
printf("Enter Record size");
scanf("%d",&n);
p=(int *)calloc(n * sizeof(int));
 printf("enter element");
 for(i=0;i<n;i++)
 {
 scanf("%d",(p+i));
 }
 printf("\n entered elements are \n");
 for(i=0;i<n;i++)
 {
 printf("%d is stored at %u \n",*(p+i),(p+i));
 }
getch();
}
