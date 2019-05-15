#include <stdio.h>
#include<conio.h>
void  main()
{
   int array[100], position, i, n, value;
   clrscr();
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the loiation where you wish to insert an element\n");
   scanf("%d", &position);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (i = n; i >= position; i--)
   {
      array[i+1] = array[i];
    }
   array[position-1] = value;

   printf("Resultant array is\n");

   for (i = 0; i <=n; i++)
   {
      printf("%d\n", array[i]);
   }
getch();
}