#include<stdio.h>
#include<conio.h>
void main()
{
 int n,num,sum,r,i,f;
 clrscr();
 printf("Enter the number");
 scanf("%d",&n);
 num=n;
 sum=0;
 while(n>0)
 {
 i=1;
 f=1;
   r=n%10;
   while(i<=r)
   {
    f=f*i;
    i++;
   }

   sum=sum+f;
   n=n/10;


 }
 if(num==sum)
 {
  printf("Strong");
 }
 else
 {
 printf("Not Strong");
 }

 getch();
}