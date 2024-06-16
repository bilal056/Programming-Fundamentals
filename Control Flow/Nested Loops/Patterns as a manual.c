#include<stdio.h>

int main()
{
    // Description:
    // This program allows the user to choose a symbol ('#', '*', '^') and prints patterns based on the chosen symbol.
    // The patterns are printed as right-aligned triangles, both in increasing and decreasing order.

    int rows = 4, row1 = 5, i, j, k;
    char symbols;

    // Prompt the user to choose a symbol for the pattern
    printf("Choose a symbol for pattern: '#', '*', '^': ");
    scanf(" %c", &symbols);

    // Printing pattern based on the chosen symbol
    if (symbols == '*')
    {
        // Chosen symbol: '*'
        printf("\nPattern with '*'\n");

        // Print the increasing triangle pattern
        for (i = 1; i <= rows; i++)
        {
            // Print '*' for the current row
            for (j = 1; j <= i; j++)
            {
                printf(" * ");
            }
            // Print spaces after '*' to align the triangle
            for (k = rows; k > i; k--)
            {
                printf(" ");
            }
            printf("\n");
        }

        // Print the decreasing triangle pattern
        for (i = row1; i > 0; i--)
        {
            // Print '*' for the current row
            for (j = 1; j <= i; j++)
            {
                printf(" * ");
            }
            // Print spaces after '*' to align the triangle
            for (k = rows; k > i; k--)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    else if (symbols == '^')
    {
        // Chosen symbol: '^'
        printf("\nPattern with '^'\n");

        // Print the increasing triangle pattern
        for (i = 1; i <= rows; i++)
        {
            // Print '^' for the current row
            for (j = 1; j <= i; j++)
            {
                printf(" ^ ");
            }
            // Print spaces after '^' to align the triangle
            for (k = rows; k > i; k--)
            {
                printf(" ");
            }
            printf("\n");
        }

        // Print the decreasing triangle pattern
        for (i = row1; i > 0; i--)
        {
            // Print '^' for the current row
            for (j = 1; j <= i; j++)
            {
                printf(" ^ ");
            }
            // Print spaces after '^' to align the triangle
            for (k = rows; k > i; k--)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    else if (symbols == '#')
    {
        // Chosen symbol: '#'
        printf("\nPattern with '#'\n");

        // Print the increasing triangle pattern
        for (i = 1; i <= rows; i++)
        {
            // Print '#' for the current row
            for (j = 1; j <= i; j++)
            {
                printf(" # ");
            }
            // Print spaces after '#' to align the triangle
            for (k = rows; k > i; k--)
            {
                printf(" ");
            }
            printf("\n");
        }

        // Print the decreasing triangle pattern
        for (i = row1; i > 0; i--)
        {
            // Print '#' for the current row
            for (j = 1; j <= i; j++)
            {
                printf(" # ");
            }
            // Print spaces after '#' to align the triangle
            for (k = rows; k > i; k--)
            {
                printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}
