#inclide<stdio.h>
#include<conio.h>
#define size 5
void max(int[]);
int pos;
int cont=0;
void main()
{
int mat[size]={};
int rank[size]={};
int c;
  for(c=0;c<size;c++){
  printf("number%d:",c+1);
  scanf("%d",&mat[c]);
  }
  printf("\n");
  for(c=0;c<size;c++)
  {

