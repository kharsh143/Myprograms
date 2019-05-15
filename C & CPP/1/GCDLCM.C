#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,x,y,lcm,gcd;
    clrscr();
    printf("Enter two Numbers");
    scanf("%d%d",&n1,&n2);
    x=n1;
    y=n2;
       while(n1!=n2)
       {
	   if(n1>n2)
	   {
	    n1-=n2;
	   }
	   else
	   {
	   n2-=n1;
	   }
       }
       gcd=n1;
       lcm=(x*y)/gcd;
       printf("%d is GCD\n",gcd);
       printf("%d is LCM\n",lcm);
getch();
}