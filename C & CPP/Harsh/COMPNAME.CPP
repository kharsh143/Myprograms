#include<stdio.h>
#include<conio.h>
#include<string.h>
struct harsh
{
char name[15];
int flag;
};
void main()
{
int j,n,i,repeat[100];
struct harsh s[100];
clrscr();
printf("\n Enter number of names :\n ");
scanf("%d",&n);
printf("\n Enter %d names:\n",n);
for(i=1;i<=n;i++)
{
scanf("%s",&s[i].name);
}

//setting all flags 0
for(i=0;i<=n;i++)
{
s[i].flag=0;
}

for(i=0;i<=n;i++)
{
repeat[i]=0;
}

printf("Most Repeated Strings Are:\n");
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i!=j)
		{
			if(strcmp(s[i].name,s[j].name)==0)
			{
			   s[j].flag=1;
			   repeat[i]++;
			}
		}
	}
	if(s[i].flag==0&&repeat[i]>=1)
	{
	   printf("\n%s",s[i].name);
	}


}


getch();
}
