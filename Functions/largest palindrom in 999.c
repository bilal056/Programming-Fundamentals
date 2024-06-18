#include <stdio.h>

// Function to check if a number is a palindrome
int palindrome(int numb1);

int main()
{
  int i, j, multi = 0;
  int product1;

  // Nested loops to iterate through all possible 3-digit numbers
  for (i = 100; i <= 999; i++)
  {
    for (j = 100; j <= 999; j++)
    {
      // Calculating the product of two 3-digit numbers
      product1 = i * j;

      // Printing the product of two 3-digit numbers
      printf("%d*%d=%d\n", i, j, product1);

      // Checking if the product is a palindrome and greater than the previously found palindrome
      if (palindrome(product1) && product1 > multi)
      {
        multi = product1;
      }
    }
  }

  // Printing the largest palindrome found
  printf("The largest Palindrome is %d\n", multi);
}

// Function to check if a number is a palindrome
int palindrome(int numb1)
{
  int reversed = 0, remainder, original = numb1;

  // Reversing the number
  while (original)
  {
    remainder = original % 10;
    reversed = reversed * 10 + remainder;
    original /= 10;
  }

  // Checking if the reversed number is equal to the original number
  return reversed == numb1;
}
