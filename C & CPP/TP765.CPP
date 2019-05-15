#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *p,n,i;
clrscr();
printf("enter the size");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
printf("%d is stored in %u ",*(p+i),(p+i));
}
getch();
}