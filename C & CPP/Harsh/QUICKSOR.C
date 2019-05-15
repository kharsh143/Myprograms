#include<stdio.h>
#include<conio.h>
  void quick_sort(int x[10],int first,int last);

void main()
{
  int a[20],size,i;
  clrscr();
  printf("Enter The Size  Array:-\n");
  scanf("%d",&size);
  printf("Enter %d Elements:-\n",size);

        for(i=0;i<size;i++)
        {
         scanf("%d",&a[i]);
	}

        quick_sort(a,0,size-1);
        printf("Sorted Elemenrs :-\n");
          for(i=0;i<size;i++)
          {
            printf("%d\n",a[i]);

	  }

getch();
}
void quick_sort(int x[10],int first,int last)
{
  int pivot,j,temp,i;
    if(first<last)
    {
     pivot=first;
     i=first;
     j=last;
    }
    while(i<j)
    {
     while (x[i]<=x[pivot]&&i<last)
     i++;
     while(x[j]>x[pivot])
     j--;
    }
    if(i<j)
    {
      temp=x[i];
      x[i]=x[j];
      x[j]=temp;
    }

}