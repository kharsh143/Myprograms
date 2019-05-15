#include<stdio.h>
#include<conio.h>
void main()
{
int a,*ptr1;
float b,*ptr2;
ptr1=&a;
printf("\n ptr1 is %u",ptr1);
ptr1++;
 printf("\n new ptr1 is %u",ptr1);
ptr2=&b;
printf("\n ptr2 is %u",ptr2);
ptr2--;
printf("\n new ptr2 is %u",ptr2);
getch();
}
