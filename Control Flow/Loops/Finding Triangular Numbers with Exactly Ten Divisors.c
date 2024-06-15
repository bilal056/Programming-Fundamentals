#include<stdio.h>

/*
    Program to find the first five numbers whose sum of natural numbers 
    is exactly divisible by 10.
*/

void main()
{
    int C1=0, s1=0, count=0, i=1;

    while(1)
    {
        s1 = s1 + i; // Calculate the sum of natural numbers

        // Check the number of divisors for s1
        for (int j = 1; j <= s1; j++)
        {
            if (s1 % j == 0)
            {
                count++; // Increment count for each divisor
            }
        }

        if (count == 10) // If s1 has exactly 10 divisors
        {
            C1++; // Increment the count of numbers found
            printf("%d is the sum\n", s1); // Print the sum
        }

        if (C1 == 5) // If we have found 5 such numbers, exit the loop
        {
            break;
        }

        i++; // Increment i for the next iteration
        count = 0; // Reset count for the next iteration
    }

    printf("First Five Devisor"); // Print a message indicating the end of the program
}
