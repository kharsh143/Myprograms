#include<stdio.h>
#include<conio.h>


int factorial(int);



void
 main()

{

    int num;

    int result;


clrscr();
    printf("Enter a number to find it's Factorial: ");

    scanf("%d", &num);

    if (num < 0)

    {

	printf("Factorial of negative number not possible\n");

    }

    else

    {

	result = factorial(num);

	printf("The Factorial of %d is %d.\n", num, result);

    }
getch();

}

int factorial(int num)

{

    if (num == 0 || num == 1)

    {

	return 1;

    }

    else

    {

	return(num * factorial(num - 1));

    }

}