//Hello Friends
//My Name Is Harsh Kairamkonda
//This Is Solution Of Target Of the sum 2 Which Is Given By Hitesh Sir

#include<stdio.h>
#include<conio.h>
void main()
{
int numbers[]={4,5,12,-2,8,9};//here we initialize The Array as The Hitesh Sir Given
int i;//this vaiable is For repeating the loop
//  int check;//this variable is to check Whether the Sum Is 10 or not
  //the check variable did not need, for best understand i have take
  //we can direct test the condition in the if()statement
  clrscr();
     for(i=0;i<6;i++)
     {

	   /*if you are  writing like this:
	   check=numbers[i]+numbers[i+1];
	   then your if statement would like is:
	    if(check==10)
	    {
	     printf("The Sum is:%d\n",check);
	    printf("When The Numbers Are:\t%d\t%d",numbers[i],numbers[i+1]);
	   }
	   if you write check variable your programs space complexity will Increase

	   so i would  like to give suggest Write The Condition in if()statement

					  */
	   if(numbers[i]+numbers[i+1]==10)
	   {
	    printf("The Sum is:%d\n",numbers[i]+numbers[i+1]);
	    printf("When The Numbers Are:\t%d\t%d",numbers[i],numbers[i+1]);
	   }

     }

  getch();
}