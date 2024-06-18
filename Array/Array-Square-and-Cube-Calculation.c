#include <stdio.h>

/* This program demonstrates the use of arrays in C to store and manipulate numbers.
   It calculates the square of numbers from 0 to 19, the cube of numbers from 20 to 39,
   and the sum of corresponding elements from the square and cube sections, storing
   the results in an array and printing them. */

int main()
{
    int n[60]; // Array to store the numbers
    int i, j, k; // Loop counters

    // Calculate and store the squares of numbers from 0 to 19
    for (i = 0; i < 20; i++)
    {
        n[i] = i * i;
        printf("%d \t", n[i]); // Print the square
    }

    // Calculate and store the cubes of numbers from 20 to 39
    for (j = 20; j < 40; j++)
    {
        n[j] = j * j * j;
        printf(" %d \t", n[j]); // Print the cube
    }

    // Calculate and store the sum of corresponding elements from square and cube sections
    for (k = 40, i = 0, j = 20; k < 60, i < 20, j < 40; k++, i++, j++)
    {
        n[k] = n[i] + n[j];
        printf(" %d \t", n[k]); // Print the sum
    }

    return 0;
}
