/*Indexed Sequential Search*/
#include <stdio.h>
#include <conio.h>
#define MAX 2
struct mainfile
{   int empid;
char name[25];
float basic;
};
struct indexfile
{
int index_id;
int kindex;
};
int main()
{
struct mainfile fobj[MAX];
struct indexfile index[MAX];

int i, num, low, high, ct = 4;
float basicsal;
clrscr();
for (i = 0;i <2;i++)
{
    printf("\nEnter employee id?");
    scanf("%d", &fobj[i].empid);
    printf("\nEnter name?");
    scanf("%s", fobj[i].name);
    printf("\nEnter basic?");
    scanf("%f", &basicsal);
    fobj[i].basic = basicsal;
}
printf("\nNow creating index file...!");
for (i = 0;i < (MAX / 2);i++)
{
    index[i].index_id = fobj[ct].empid;
    index[i].kindex = ct;
    ct = ct + 2;
}
printf("\n\nEnter the empid to search?");
scanf("%d", &num);
for (i = 0;(i < MAX / 2) && (index[i].index_id <= num);i++);
low = index[i-1].kindex;
high = index[i].kindex;
for (i = low;i <= high;i++)
{
    if (num == fobj[i].empid)
    {
	printf("\nThe record is: \n\t");
	printf("\nEmpid: %d", fobj[i].empid);
	printf("\nName: %s", fobj[i].name);
	printf("\nBasic: %f", fobj[i].basic);
	getch();
	return;
    }
}
printf("\nNumber not found...!");
return 0;
}