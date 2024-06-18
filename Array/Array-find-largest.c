/*
Description:
This C program finds the largest element in a 3x4 2D array 'a'. It initializes a variable 'large' with the first element of the array and then iterates through the array, updating 'large' if a larger element is found. Finally, it prints the largest element found in the array.
*/

#include <stdio.h>

int main()
{
    // Initializing a 2D array
    int a[3][4] = {
        {43, 54, 65, 23},
        {87, 65, 34, 23},
        {12, 65, 76, 45}
    };

    // Variable to store the largest value
    int large = 0;

    // Initializing large with the first element of the array
    large = a[0][0];

    // Looping through the array to find the largest value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // Checking if the current element is larger than the current largest
            if (large >= a[i][j + 1])
            {
                large = large; // No change if the current element is not larger
            }
            else
            {
                large = a[i][j + 1]; // Updating large if the current element is larger
            }
        }
    }

    // Printing the largest value
    printf("largest is %d", large);

    return 0;
}
