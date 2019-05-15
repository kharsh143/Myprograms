#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 10

int checksort(int arr[],int n)
{
int i,j,temp,flag=1;
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{if(arr[i]>arr[j])
{flag=0;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
return flag;
}

void mergearr(int a[], int b[], int c[], int n1,int n2,int n3)
{
int al,bl,cl,ah,bh,ch,i;/*l for low, h for high*/
ah=n1-1;
bh=n2-1;
ch=n3-1;
if(n1+n2!=n3)
{printf("\nArray bounds not proper!");
exit(1);
}
al=0;
bl=0;
for(i=0;al<=ah && bl<=bh;i++)
{if(a[al]<b[bl])
c[i]=a[al++];
else
c[i]=b[bl++];
}
while(al<=ah)
c[i++]=a[al++];
while(bl<=bh)
c[i++]=b[bl++];
}