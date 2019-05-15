#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf

void main()
{
int i,j,temp,flag;
int a[5],b[5],index[5];
flag=1;
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
getch();
}


