#include<stdio.h>
#include<conio.h>
void main()
{
int first[10][10],second[10][10],mul[10][10];
int m,n,p,q,i,j,k,sum=0;
clrscr();
printf("Enter the rows and coloumns numbers in first matrix:-\n ");
scanf("%d%d",&m,&n);
printf("Enter the elements in first matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&first[i][j]);
}
}

printf("Enter the numbers of columns and rows in second matrix:-\n ");
scanf("%d%d",&p,&q);
   if(n!=p)
   {
   printf("Entered matrix is wrong");
   }
   else
   printf("Enter the elements in second matrix\n");
   for(i=0;i<p;i++)
   {
   for(j=0;j<q;j++)
   {
   scanf("%d",&second[i][j]);
   }
   }

   for(i=0;i<m;i++)
   {
   for(j=0;j<q;j++)
   {
   for(k=0;k<p;k++)
   {
   sum=sum+first[i][k]*second[k][j];
   }
   mul[i][j]=sum;
   sum=0;
   }

   }
printf("The Multiplication of two matrix is \n");
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