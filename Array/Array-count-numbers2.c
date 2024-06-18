#include <stdio.h>

int main()
{
    // Define an array 'mark' of size 10 to store integer values
    // Initialize the array with values 1, 2, 3, 4, 4, 5, 6, 7, 8, 4
    int i, mark[10] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 4};
    // Initialize a variable 'count' to store the count of numbers between 1 and 8 inclusive
    int count = 0;

    // Iterate over the 'mark' array
    for (i = 0; i < 10; i++)
    {
        // Check if the current element is between 1 and 8 inclusive
        if (mark[i] >= 1 && mark[i] <= 8)
        {
            // Increment the count if the condition is met
            count++;
        }
    }

    // Print the count of numbers between 1 and 8 inclusive
    printf("Count of numbers between 1 and 8 inclusive: %d\n", count);

    return 0;
}
