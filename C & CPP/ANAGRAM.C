#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int len1,len2,i,j,count=0;
char str1[100],str2[100],l;
clrscr();
printf("Enter Strings");
scanf("%s%s",str1,str2);


  len1=strlen(str1);
  len2=strlen(str2);
    for(i=0;i<len1;i++)
    {
       for(j=0;j<len2;j++)
       {
	 if(str1[i]==str2[j])
	 {
	    count++;
	 }

       }
    }
    if(len1==count&&len2==count)
    {
      printf("Anagram");
    }
    else
    {
      printf("Not");
    }
getch();
}