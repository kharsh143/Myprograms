#include<stdio.h>
#include<conio.h>
void main()
{
 int prime1,prime2,random,temp[100],match=0,i=0,temp1;
 clrscr();
 printf("Enter Two Prime Numbers and  any Non Zero Number");
 scanf("%d%d%d",&prime1,&prime2,&random);
      while(1)
      {
       temp1=(prime1*prime2*random)%9;
	temp[i]=temp1;


	   printf("%d",temp[i]);
		i++;
		temp1++;
	   if(temp[0]==temp[i])
	   {
		exit(0);
	   }

      }
 getch();
}