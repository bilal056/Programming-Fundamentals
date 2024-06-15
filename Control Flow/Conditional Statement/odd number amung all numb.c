#include <stdio.h>

int main()
{
    int x, y, z;

    // Take three numbers from the user
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter a number: ");
    scanf("%d", &y);

    printf("Enter a number: ");
    scanf("%d", &z);

    // Find the greatest odd number among x, y, and z
    if ((x % 2 != 0) && (x > y || y % 2 == 0) && (x > z || z % 2 == 0))
    {
        printf("%d is the greatest odd number among them\n", x);
    }
    else if ((y % 2 != 0) && (y > x || x % 2 == 0) && (y > z || z % 2 == 0))
    {
        printf("%d is the greatest odd number among them\n", y);
    }
    else if (z % 2 != 0)
    {
        printf("%d is the greatest odd number among them\n", z);
    }
    else
    {
        printf("None of the above are odd numbers\n");
    }

    return 0;
}
