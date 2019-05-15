#include<stdio.h>
#include<conio.h>
#define size 50
void push(char );
char stack[size],top=-1;
void main()
{
int ch,item,c=0,count=0;
char s[50],i=0;
clrscr();
printf("Input String");
scanf("%s",s);
    while(s[c]!='\0')
    {
	  push(s[c]);
	  c++;
    }

    while(stack[i]!='\0')
    {
    if(stack[i]=='a'|| stack[i]=='A'||stack[i]=='e'||stack[i]=='E'||stack[i]=='i'||stack[i]=='I'||stack[i]=='o'||stack[i]=='O'||stack[i]=='u'||stack[i]=='U')

     {
     count++;
      printf("%c is a Vowel\n",stack[i]);
      }
      i++;
    }

printf("Total Vowels Are=%d",count);
getch();

}
void push(char ele)
{
	      top++;
	    stack[top]=ele;
	    printf("%c is pushed\n",ele);
}