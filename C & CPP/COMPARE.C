#include<conio.h>
#include<stdio.h>
#include<string.h>
int compare(char *p,char *q);
void main()
{
  int cmp,a,b;
  char str1[20],str2[20];
  clrscr();
  printf("Enter Two Strings");
  gets(str1);
  gets(str2);
   a=strlen(str1);
   b=strlen(str2);
   if(a!=b)
   {
    printf("String Are Not Same");
   }
   else
   {
   cmp=compare(str1,str2);

  if(cmp==0)
  {
  printf("String are Same");
  }
  else
  {
   printf("String are not same");
  }
  }
getch();
}
int compare(char *p,char *q)
{
   int i;
   for(i=0;p[i]!='\0';i++)
   {
	if(p[i]==q[i])
	{
	  continue;
	}
	else
	{
	  return(p[i]-q[i]);
	}

   }
   return(0);


}