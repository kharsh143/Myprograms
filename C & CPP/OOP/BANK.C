#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define pf printf
#define sf scanf
void case_1();
long int acc_no=1000000001;
int choice;
struct acc_holder
{
char name[20];
char occupation[20];
char address[50];
char city[20];
char state[20];
char country[20];
long int contact;
};
struct acc_holder user;
void main()
{
FILE *p;

clrscr();
pf("Enter a option :-");
pf("\n 1] Create Account \n 2] Account Details \n 3] Deposite / Withdraw ");
sf("%d",&choice);
switch(choice)
{
case 1:
case_1();
break;
}
getch();
}
void case_1()
{
pf("\n Enter Name :-");
sf("%s",user.name[20]);
pf("\n Enter Occuptaion :-");
sf("%s",user.occupation[20]);
pf("\n Enter Contact number :-");
sf("%ld",&user.contact);
pf("\n Enter address :-");
sf("%s",user.address[50]);
pf("\n Enter City :-");
sf("%s",user.city[20]);
pf("\n Enter State :-");
sf("%s",user.state[20]);
pf("\n Enter Country :-");
sf("%s",user.country[20]);
pf("\nYour Account number is :: %ld ",acc_no);
}
