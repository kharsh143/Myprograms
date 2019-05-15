#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf
void main()
{

int i,j,temp,flag,m,n,temp1,flag1,p,d1,ans,sum;
int a[5],b[5],index[5],c[5],d[5],index1[5];
flag=1;
//int  m,n,temp1,flag1;
//int c[5],d[5],index1[5];
flag1=1;

clrscr();
pf("enter elements in array");
  for(i=0;i<5;i++)
  {
  sf("%d",&a[i]);
  }
  pf("elements are:\n");
  for(i=0;i<5;i++)
  {
 //pf("%d\t",a[i]);
  b[i]=a[i];
  }

  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
    if(b[i]>b[j])
    {
    temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    }
    }
  }

  for(i=0;i<5;i++)
  {
  for(j=0;j<5;j++)
  {
  if(b[i]==a[j])
  {
  index[j]=flag;
  flag++;
  }
  }
  }
  pf("\n");
  for(i=0;i<5;i++)
  {
  pf("%d\t",index[i]);
  }

  pf("\nenter elements in array");
  for(m=0;m<5;m++)
  {
  sf("%d",&c[m]);
  }
  pf("elements are:\n");
  for(m=0;m<5;m++)
  {
 //pf("%d\t",a[i]);
  d[m]=c[m];
  }

  for(m=0;m<5;m++)
  {
    for(n=m+1;n<5;n++)
    {
    if(d[m]>d[n])
    {
    temp1=d[m];
    d[m]=d[n];
    d[n]=temp1;
    }
    }
  }

  for(m=0;m<5;m++)
  {
  for(n=0;n<5;n++)
  {
  if(d[m]==c[n])
  {
  index1[n]=flag1;
  flag1++;
  }
  }
  }
  pf("\n");
  for(m=0;m<5;m++)
  {
  pf("%d\t",index1[m]);
  }
    sum=0;
 // for(p=0;p<5;p++)
 // {
  d1=index[i]-index1[m];
  ans=d1*d1;
  sum= sum+ans;
 // }
  printf("\n%d",sum);

 getch();
}