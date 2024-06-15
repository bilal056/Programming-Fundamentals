#include <stdio.h>

/*
 * This program calculates the Least Common Multiple (LCM) of two numbers entered by the user.
 * It uses a while loop to find the LCM by checking if a number is divisible by both input numbers.
 */

int main()
{  
    int n1, n2, i, fact = 1;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    // Initialize i to the maximum of the two numbers
    i = (n1 > n2) ? n1 : n2;

    // Find the LCM using a loop
    while (fact)
    {
        if ((i % n1 == 0) && (i % n2 == 0))
        {
            printf("LCM = %d", i);
            fact = 0;
        }
        i++;
    }

    return 0;
}
