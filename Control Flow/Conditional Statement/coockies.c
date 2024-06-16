#include <stdio.h>

/* 
This program calculates the number of cookies left in the box, 
given the total number of cookies, number of cookies in a box, 
and number of boxes in a container.
*/

int main()
{
    int cookie, box, container, a, b, c, d;

    // Take input for the maximum number of cookies
    printf("Enter the total number of cookies: ");
    scanf("%d", &cookie);

    // Take input for the number of cookies in a box
    printf("Enter the number of cookies in a box: ");
    scanf("%d", &box);

    // Take input for the number of boxes in one container
    printf("Enter the number of boxes in one container: ");
    scanf("%d", &container);

    // Check if any of the given numbers is zero
    if ((cookie > 0) && (box > 0) && (container > 0))
    {
        // Calculate the number of cookies in a box and left out of the box
        a = cookie / box;
        b = cookie % box;
        printf("Number of cookies in a box: %d\n", a);
        printf("Number of cookies left out of the box: %d\n", b);

        // Calculate the number of boxes in a container and left out of the container
        c = a / container;
        d = a % container;
        printf("Number of boxes in a container: %d\n", c);
        printf("Number of boxes left out of the container: %d\n", d);
    }
    else
        printf("Calculation cannot be done. One of the values is negative.\n");

    return 0;
}
