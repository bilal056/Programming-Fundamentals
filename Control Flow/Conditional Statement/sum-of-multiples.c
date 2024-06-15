#include <stdio.h>

int main()
{
  // Initialize sum1 to store the sum of numbers divisible by both 3 and 5
  int sum1 = 0;

  // Print statement to indicate the operation being performed
  printf("The sum of numbers between 0 and 150 that are divisible by both 3 and 5 is: ");

  // Loop from 0 to 150
  for (int i = 0; i <= 150; i++)
  {
    // Check if the number is divisible by both 3 and 5
    if ((i % 3 == 0) && (i % 5 == 0))
    {
      // Add the number to sum1 if the condition is true
      sum1 = sum1 + i;
    }
  }

  // Print the resulting sum
  printf("sum is %d", sum1);

  // Return 0 to indicate successful execution
  return 0;
}
