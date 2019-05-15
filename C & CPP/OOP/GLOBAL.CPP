#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int n1,n2;
class Swap
{
   public :
   int a,b;

   void swap(int &m,int &n)
   {

     int temp;
     temp=n1;
     n1=n2;
     n2=temp;
     a=m;
     b=n;
     cout<<"\nAfter Swapping A="<<a<<"\tB="<<b;
     printf("\n&m=%u\t&n=%u",&m,&n);
   }
};
void main()
{
Swap s;
//    int n1,n2;
    clrscr();
    cout<<"Enter Two Numbers";
    cin>>n1>>n2;
    printf("\nn1=%u\tn2=%u",&n1,&n2);
     s.swap(n1,n2);
getch();
}