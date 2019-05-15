#include<stdio.h>
#include<conio.h>
void main(int argc , char *argv[])
{
int i;
if(argc>=3)
{
printf("entered numbers are:");
for(i=1;i<argc;i++)
{
printf("%s\t",argv[i]);
 }
}
else
printf("too many agrumrnt");
getch();
}
