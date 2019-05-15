#include<stdio.h>
#include<conio.h>
#include<string.h>
struct address {
      char sn[20];
      int hn;
      };
struct student {
       char name[15];
       int rollno;

       struct address addr;
       };
void main()
{
struct student harsh={
	 "Harsh",
	 76,
	 "256 Gala",
	 7
	 };

clrscr();
printf("%s \n%d \n%s \n%d",harsh.name,harsh.rollno,harsh.addr.sn,harsh.addr.hn);
getch();
}
