#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10][10],b[10][10],mul[10][10];
  int k,m,n,p,q,i,j,sum=0;
  clrscr();
  printf("Enter The Numberof rows and column\n");
  scanf("%d%d",&m,&n);
  printf("Enter The Elements In first Element In First matrix\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }
  }
  printf("Enter The Number Of Rows And Coloumns\n");
  scanf("%d%d",&p,&q);
  if(n!=p)
  {
    printf("Operation Is  InValid");

  }
  else
  {
    printf("Enter The Second Matrix\n");
      for(i=0;i<p;i++)
      {
	for(j=0;j<q;j++)
	{
	scanf("%d",&b[i][j]);
	}
      }


  }
//  sum=0;
    for(i=0;i<m;i++)
    {
    for(j=0;j<q;j++)
    {
    for(k=0;k<p;k++)
    {
      sum=sum+a[i][k]*b[k][j];
    }

    mul[i][j]=sum;
    sum=0;
    }
    }
  for(i=0;i<m;i++)
  {
  for(j=0;j<q;j++)
  {
  printf("%d\t",mul[i][j]);
  }
  printf("\n");
  }
getch();

}