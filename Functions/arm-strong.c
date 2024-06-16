#include <stdio.h>

/*
 * This function checks if a given number is an Armstrong number.
 * An Armstrong number is a number that is equal to the sum of its own digits
 * each raised to the power of the number of digits.
 */
int arm(int a);

int main()
{
   int numb, remainder, c;

   // Get input from user
   printf("Enter number: ");
   scanf("%d", &numb);

   // Check if the number is an Armstrong number
   if (arm(remainder) == c)
   {
      printf("Armstrong number\n");
   }
   else
   {
      printf("Not an Armstrong number\n");
   }

   return 0;
}

int arm(int a)
{
   int c, numb, remainder, result;
   c = numb; // Store the original number

   // Calculate the sum of cubes of each digit
   while (numb != 0)
   {
      result = numb % 10;
      numb = numb / 10;
      remainder = remainder + (result * result * result);
   }

   return remainder;
}
