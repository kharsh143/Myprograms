








#include <dos.h>
#include <stdio.h>
#include<conio.h>
int main()
{
    while(!kbhit())
    {
       printf("Harsh");
       clrscr();
       printf("Harsh");
   }
getch();
}
