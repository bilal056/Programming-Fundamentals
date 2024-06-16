#include <stdio.h>

// Logic:
// 1. Define a 2x2 array a and a temporary variable temp.
// 2. Take user input for the 2x2 array.
// 3. Display the original array.
// 4. Swap the elements at indices (0,1) and (1,0) using the temporary variable.
// 5. Display the modified array after swapping.
// 6. End of the program.

int main()
{
    int a[2][2], temp;

    // Taking user input for the 2x2 array
    printf("Enter 4 elements for a 2x2 array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Displaying the original array
    printf("Original Array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    // Swapping elements in the array
    temp = a[0][1];
    a[0][1] = a[1][0];
    a[1][0] = temp;

    // Displaying the modified array
    printf("Modified Array after swapping elements at indices (0,1) and (1,0):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
