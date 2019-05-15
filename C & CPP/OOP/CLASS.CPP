#include<stdio.h>
#include<conio.h>
#include<iostream.h>

  class Human{

   public:
	  char name[20];
	       void display();


  };
void Human :: display()
{
cout<<Human ::name;
}
int main()
{
clrscr();
   Human harsh;
   harsh.name="Harsh";
   harsh.display();
   Human pranil;
   pranil.name="Pranil";
   pranil.display();
getch();
}
