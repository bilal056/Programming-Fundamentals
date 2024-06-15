#include <stdio.h>

/*
    This program calculates the number of digits in a given integer entered by the user.
*/

int main()
{
   int numb, count = 0;

   // Ask the user to enter a number
   printf("Enter a number: ");
   scanf("%d", &numb);

   // Count the number of digits in the entered number
   while (numb != 0)
   {
      numb = numb / 10;
      count++;
   }

   // Display the number of digits in the entered number
   printf("Number of digits: %d\n", count);

   return 0;
}
