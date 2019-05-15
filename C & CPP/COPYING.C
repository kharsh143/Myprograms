#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
int num;
char *info;

}record;
void main()
{
    record *res;

    int num=2;
    int k;
    char str[]="Harsh";
    clrscr();
    printf("%d",sizeof(*res));

    res=calloc(num,sizeof(record));

      if(res!=NULL)
      {
	for(k=0;k<num;k++)
	{
	  (res+k)->num=k;
	  (res+k)->info=malloc(sizeof(str));
	  strcpy((res+k)->info,str);
	}
      }
getch();
}