#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 6, columns = 6;
    int i, j, k, m, z = 0;

    // Pattern 1 Description:
    // This pattern prints a right-angled triangle of numbers,
    // where each row contains the same number repeated.
    // Example for rows=6:
    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 
    // 5 5 5 5 5 
    printf("Pattern-1\n");
    for (i = 1; i < rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    // Pattern 2 Description:
    // This pattern prints a right-angled triangle of numbers,
    // aligned to the right side.
    // Example for rows=6:
    //      1 
    //     1 2 
    //    1 2 3 
    //   1 2 3 4 
    //  1 2 3 4 5 
    printf("\nPattern-2\n");
    for (i = 0; i < rows; i++) {
        for (k = rows; k > i; k--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Pattern 3 Description:
    // This pattern prints a right-angled triangle of alphabets,
    // starting from 'A' and incrementing for each row.
    // Example for columns=6:
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    // ABCDEF
    printf("\nPattern-3\n");
    char alphabet = 'A';
    for (i = 1; i <= columns; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", alphabet + j - 1);
        }
        printf("\n");
    }

    // Pattern 4 Description:
    // This pattern prints a centered pyramid of numbers,
    // where each row contains the same number.
    // Example for rows=6:
    //     1
    //    222
    //   33333
    //  4444444
    // 555555555
    printf("\nPattern-4\n");
    for (i = 1; i <= rows; i++) {
        for (j = rows - 1; j >= i; j--) {
            printf(" ");
        }
        for (k = i - 1; k >= -(i - 1); k--) {
            printf("%d", i - abs(k));
        }
        printf("\n");
    }

    // Pattern 5 Description:
    // This pattern prints an inverted right-angled triangle of alphabets,
    // starting from 'A' and incrementing for each row.
    // Example for rows=6:
    // A B C D E F
    // A B C D E
    // A B C D
    // A B C
    // A B
    // A
    printf("\nPattern-5\n\n");
    for (i = rows; i >= 1; i--) {
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c ", alphabet + j - 1);
        }
        printf("\n");
    }

    // Pattern 6 Description:
    // This pattern prints a diamond shape of stars.
    // Example for rows=4:
    // *****
    // *   *
    // *   *
    // *****
    printf("\nPattern-6\n\n");
    int rows1 = 4;
    for (i = 0; i <= rows1; i++) {
        for (j = -rows1; j <= rows1; j++) {
            if (-i < j && j < i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    // Pattern 7 Description:
    // This pattern prints a rectangle with a diagonal line of stars.
    // Example for rows=6 and columns=8:
    //  * * * * * * 
    //  *       * 
    //  *     * 
    //  *   * 
    //  * * 
    //  * 
    printf("\nPattern-7\n\n");
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 6; j++) {
            if (i == 1 || i == 6 || j == (7 - i) || j == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // Pattern 8 Description:
    // This pattern prints a solid rectangle of stars.
    // Example for rows=6 and columns=6:
    // ******
    // ******
    // ******
    // ******
    // ******
    // ******
    printf("\nPattern-8\n\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Pattern 9 Description:
    // This pattern prints a hollow square with diagonals.
    // Example for rows=6 and columns=6:
    // * * * * * *
    // * *     * *
    // *   * *   *
    // *   * *   *
    // * *     * *
    // * * * * * *
    printf("\nPattern-9\n\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns || i == j || j == (columns - i + 1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // Pattern 10 Description:
    // This pattern prints a Pascal's triangle.
    // Example for rows=6:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    printf("\nPattern-10\n\n");
    int coef = 1;
    for (i = 0; i < rows; i++) {
        for (k = 1; k <= rows - i; k++)
            printf("  ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == j)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }

    // Pattern 11 Description:
    // This pattern prints a diamond shape.
    // Example for rows=6:
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    printf("\nPattern-11\n\n");
    int n = 5;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    // Pattern 12 Description:
    // This pattern prints a pyramid with numbers.
    // Example for rows=6:
    //     1
    //    2 2
    //   3 3 3
    //  4 4 4 4
    // 5 5 5 5 5
    printf("\nPattern-12\n\n");
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}
