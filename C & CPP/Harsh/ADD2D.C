#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int **firstM,**secondM,i,j,n;
clrscr();
printf("Enter The Size Of  Matrix:\n");
scanf("%d",&n);
   firstM=(int **)malloc(n*sizeof(int *));
   secondM=(int **)malloc(n*sizeof(int *));
   printf("Enter The First Matrix\n");
   for(i=0;i<n;i++)
      {
	 for(j=0;j<n;j++)
	 {
	   scanf("%d",&firstM[i][j]);
	 }
      }

      printf("Enter Second Matrix\n");
      for(i=0;i<n;i++)
      {
	 for(j=0;j<n;j++)
	 {
	   scanf("%d",&secondM[i][j]);
	 }
      }

printf("Addition Is\n");
      for(i=0;i<n;i++)
      {
	 for(j=0;j<n;j++)
	 {
	   printf("%d\t",firstM[i][j]+secondM[i][j]);
	 }
	 printf("\n");
      }


getch();
}