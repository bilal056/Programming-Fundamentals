#include <stdio.h>

/*
 * This program takes input for 5 numbers and finds the minimum and maximum values among them.
 */
int main()
{
    int mark[5], max1, min;

    // Inputting 5 numbers
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &mark[i]);
    }

    min = mark[0];

    // Finding the minimum value
    for (int i = 0; i < 5; i++)
    {
        if (min <= mark[i])
        {
            continue;
        }
        else
        {
            min = mark[i];
        }
    }

    max1 = mark[0];

    // Finding the maximum value
    for (int i = 1; i < 5; i++)
    {
        if (max1 >= mark[i + 1])
        {
            continue;
        }
        else
        {

            max1 = mark[i + 1];
        }
    }
    printf("min %d\n", min);
    printf("max is : %d\n", max1);

    return 0;
}
