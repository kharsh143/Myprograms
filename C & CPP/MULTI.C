#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10];
int i,j,p,q,k,l,m,n,sum=0;
clrscr();
   printf("Enter The Number of Rows & Coloumns");
   scanf("%d%d",&m,&n);
   printf("Enter The Elements in First matrix");
     for(i=0;i<m;i++)
     {
     for(j=0;j<n;j++)
     {
     scanf("%d",a[i][j]);
     }
     }
     printf("Enter The Numbers Of Rows & Coloumns");
     scanf("%d%d",&p,&q);
     if(n!=p)
     {

     printf("Matrix Operations Is Not Valid");

     }
     else
     {
      printf("Enter The Elements In Second Matrix");
      for(i=0;i<p;i++)
      {
      for(j=0;j<q;j++)
      {
      scanf("%d",&b[i][j]);
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
 printf("The Product Of Matix is :\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<q;j++)
 {
 printf("%d",c[i][j]);
 printf("\n");
 }
 }

     }
getch();
}