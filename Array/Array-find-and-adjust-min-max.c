#include <stdio.h>

/*
    This program finds the smallest element in array 'a' and adds 1 to it,
    and finds the largest element in array 'b' and subtracts 1 from it.
*/

int main()
{
    int a[5] = {4, 1, 3, -1, 2}, b[5] = {4, 6, 5, 9, 7};
    int large, small;

    large = b[0];   // Initialize 'large' with the first element of array 'b'
    small = a[0];   // Initialize 'small' with the first element of array 'a'

    for (int i = 1; i < 5; i++) // Loop through the arrays from index 1 to 4
    {
        if (small >= a[i]) // Find the smallest element in 'a'
        {
            small = a[i];
        }
        if (large <= b[i]) // Find the largest element in 'b'
        {
            large = b[i];
        }
    }

    small += 1; // Increment the smallest element in 'a' by 1
    large -= 1; // Decrement the largest element in 'b' by 1

    printf("Smallest positive integer in array a + 1: %d\n", small);
    printf("Largest integer in array b - 1: %d\n", large);

    return 0;
}
