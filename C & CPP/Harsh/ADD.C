#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int n,*p,i,sum=0;
   printf("Enter The N Value");
   scanf("%d",&n);
   p=(int *)malloc(n*sizeof(int));
//   sum=(int *)malloc(n*sizeof(int));

	 for(i=0;i<n;i++)
	 {
	    scanf("%d",(p+i));
	     sum=sum+*(p+i);
	 }
	 printf("%d",sum);
      getch();

}