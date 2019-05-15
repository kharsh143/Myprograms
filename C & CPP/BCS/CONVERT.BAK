#include <stdio.h>
#include <conio.h>
#include<math.h>
void Hexa(int binaryval);
void  Octal(int binaryNumber);
void main()
{
    int binaryNumber;
     clrscr();
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    Octal(binaryNumber);
    Hexa(binaryNumber);
getch();
}

void Octal(int binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber >0)
    {
	decimalNumber += (binaryNumber%10) * pow(2,i);
	++i;
	binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber >0)
    {
	octalNumber += (decimalNumber % 8) * i;
	decimalNumber /= 8;
	i *= 10;
    }

    printf("%d in binary = %d in octal", binaryNumber, octalNumber);
    printf("\n");
}


void Hexa(int binaryval)
{
 int remainder,hexadecimalval,i=1;
 while (binaryval>0)
    {

	remainder = binaryval % 10;
	hexadecimalval = hexadecimalval + remainder * i;
	i = i * 2;
	binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);


}

