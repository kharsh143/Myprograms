#include<stdio.h>
#include<conio.h>
  void call(int *x){
  printf("Inside Call x=%d\n",*x);
  *x+=10;
  printf("Inside CAll x=%d After Add\n",*x);
  }
void main()
{
int a=10;
clrscr();
printf("a=%d before funtion\n",a);
call(&a);
printf("a=%d after function call\n",a);
getch();
}