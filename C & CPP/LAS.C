#include<stdio.h>
#include<conio.h>
void main()
{
int p0[30],q0[30],p1[30],q1[30],i,j,n;
long int q1p0,q0p0,sum,sum1;
float ans;
clrscr();
printf("enter the n value");
scanf("%d",&n);
printf(" enter the all elements in p0");
 for(i=0;i<n;i++)
 {
 scanf("%d",&p0[i]);
 }
printf(" enter the all elements in q0");
 for(i=0;i<n;i++)
 {
 scanf("%d",&q0[j]);
 }
printf(" enter the all elements in p1");
 for(i=0;i<n;i++)
 {
 scanf("%d",&p1[i]);
 }
printf(" enter the all elements in q1");
 for(i=0;i<n;i++)
 {
 scanf("%d",&q1[j]);
 }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
  q1p0=q1[j]*p0[i];
  sum =sum+q1p0;
  }
  }
   for(i=0;i<n;i++)
     {
     for(j=0;j<n;j++)
     {
     q0p0=q0[j]*p0[i];

     }
      sum1=sum1+q0p0;
     }

 ans=sum/sum1;
 printf("%f",ans);
getch();
}
