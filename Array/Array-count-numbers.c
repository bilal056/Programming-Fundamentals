#include <stdio.h>

/*
Description:
This program prompts the user to enter a number and then searches for that number in a predefined array of integers. It counts the number of occurrences of the input number in the array and displays the result.
*/


int main()
{
    // Define an array of integers
    int x[] = {1, 2, 4, 4, 6, 7, 5, 3, 4, 5, 7, 6, 8, 44, 55, 33, 22, 44, 33, 65, 76, 98, 17, 23, 17};

    // Declare variables for user input and counting occurrences
    int b;
    int count = 0;

    // Ask the user for input
    printf("Enter the number you want to search: ");
    scanf("%d", &b);

    // Search for the input number in the array and count occurrences
    for (int i = 0; i < 25; i++) // Since the array has 25 elements, the loop should iterate 25 times
    {
        if (x[i] == b)
        {
            count++;
        }
    }

    // Display the result
    printf("The element %d is found %d times in the array\n", b, count);

    return 0;
}

