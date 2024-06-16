#include <stdio.h>

/* 
   This program calculates the sum of the diagonal elements of a 3x3 matrix.
   It asks the user to input values for each element of the matrix and then
   calculates the sum of the diagonal elements.
*/

int main()
{
    int a[3][3], sum;

    // Taking input for the 3x3 matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number : ");
            scanf("%d", &a[i][j]);
        }
    }

    // Calculating the sum of the diagonal elements
    sum = a[0][0] + a[1][1] + a[2][2];
    printf("Addition of the diagonal elements is : %d\n", sum);

    return 0;
}
