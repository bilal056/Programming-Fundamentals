#include <stdio.h>

/*
 * This program finds and prints all perfect numbers up to a user-defined limit.
 * A perfect number is a positive integer that is equal to the sum of its proper
 * divisors (excluding itself). For example, the number 6 is a perfect number because
 * its divisors (excluding 6) are 1, 2, and 3, and 1 + 2 + 3 = 6.
 */

int main()
{
   int sum, i, k, a;

   // Prompt the user to enter a number
   printf("Enter a number: ");
   scanf("%d", &a);

   // Display a message indicating the perfect numbers found
   printf("Perfect numbers are: ");

   // Loop through numbers from 1 to the user-defined limit
   for (i = 1; i <= a; i++)
   {
      sum = 0; // Initialize sum for each number

      // Find the sum of divisors of the current number
      for (k = 1; k < i; k++)
      {
         if (i % k == 0) // Check if k is a divisor of i
         {
            sum += k; // Add the divisor to the sum
         }
      }

      // Check if the sum of divisors equals the current number (i.e., it's a perfect number)
      if (sum == i)
      {
         printf("%d\t", i); // Print the perfect number
      }
   }
   return 0;
}
