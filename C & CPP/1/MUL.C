#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,m,n,p,q,sum=0;
  int a[10][10],b[10][10],c[10][10];
  clrscr();
  printf("Enter The number Columns And Rows U Want in 1st Matrix");
  scanf("%d%d",&m,&n);
   printf("Enter The First The First Matrix");
      for(i=0;i<m;i++)
      {
	for(j=0;j<n;j++)
	{
	  scanf("%d",&a[i][j]);
	}
      }
      printf("Enter The number Of Columns And Rows in Second matrix");
      scanf("%d%d",&p,&q);
	if(n!=p)
	{
	  printf("Operation Could not Perform");
	}
	else
	{
	    printf("Enter The Secnod Matrix");
	    for(i=0;i<p;i++)
	    {
	       for(j=0;j<q;j++)
	       {
		scanf("%d%d",&b[i][j]);
	       }
	    }

	    for(i=0;i<m;i++)
	    {
	       for(j=0;j<q;j++)
	       {
		 for(k=0;k<p;k++)
		 {
		   sum=sum+a[i][k]*b[k][j];
		 }
		 c[i][j]=sum;
		 sum=0;
	       }

	    }

	}
	printf("Multiplication Is:\n");
	for(i=0;i<m;i++)
	{
	   for(j=0;j<q;j++)
	   {
	     printf("%d ",c[i][j]);
	   }
	   printf("\n");
	}
  getch();
}