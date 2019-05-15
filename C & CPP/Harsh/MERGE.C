#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],b[5],c[11],i,j,k,temp;
  clrscr();
  printf("Enter 5 Numbers");
     for(i=0;i<5;i++)
     {
       scanf("%d",&a[i]);
     }
     printf("enter Second Array");
     for(i=0;i<5;i++)
     {
      scanf("%d",&b[i]);
     }
     for(i=0;i<=3;i++)
     {
       for(j=i+1;j<=4;j++)
       {
	 if(a[i]>a[j])
	  {
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	  }
	  if(b[i]>b[j])
	  {
	    temp=b[i];
	    b[i]=b[j];
	    b[j]=temp;
	  }
       }

     }
	  k=0;i=0;j=0;
	  while(k<10)
	  {
	    if(a[i]<=b[j])
	    {
	     c[k]=a[i];
	     i++;k++;
	    }
	    else
	    {
	      c[k]=b[j];
	      j++;k++;
	    }
	    if(i==5 || j==5)
	    {
	    break;
	    }

	  }
	  while(j<5)
	  {

	      c[k]=b[j];
	      j++;k++;
	  }
	  while(i<5)
	  {
	    c[k]=a[i];
	    i++;k++;
	  }

     printf("The Merged List IS :\n");
     for(k=0;k<10;k++)
     {
       printf("\t%d",c[k]);
     }
  getch();
}