#include <stdio.h>

/*
 * Description:
 * This program calculates the volume of a given number of packs and compares it
 * with the volume of a box. The program will prompt the user to enter the 
 * dimensions (length, width, height) for both the pack and the box, as well as 
 * the number of packs. It then calculates the total volume of the packs and the 
 * volume of the box, compares them, and outputs the remaining space in the box 
 * in terms of the number of packs that can still fit.

 * Steps:
 * 1. Prompt the user to enter the number of packs and their dimensions.
 * 2. Calculate the total volume of the packs.
 * 3. Prompt the user to enter the dimensions of the box.
 * 4. Calculate the volume of the box.
 * 5. Compare the total volume of the packs with the volume of the box.
 * 6. Output the remaining space in the box in terms of the number of packs that can fit.
 */

int main()
{
    int a, b, pack, box, length, width, height, volume1, volume2, n, sum, volume;

    // Prompt user to enter the number of packs
    printf("Enter number of packs : ");
    scanf("%d", &n);

    // Prompt user to enter the dimensions of a single pack
    printf("Enter pack length : ");
    scanf("%d", &length);

    printf("Enter pack width : ");
    scanf("%d", &width);

    printf("Enter pack height :");
    scanf("%d", &height);

    // Calculate the volume of one pack and total volume of all packs
    volume1 = length * width * height;
    volume = volume1 * n;
    a = volume;

    // Output the total volume of packs
    printf("= %d \n", a);

    // Prompt user to enter the dimensions of the box
    printf("Enter box length : ");
    scanf("%d", &length);

    printf("Enter box width : ");
    scanf("%d", &width);

    printf("Enter box height : ");
    scanf("%d", &height);

    // Calculate the volume of the box
    volume2 = length * width * height;
    b = volume2;

    // Output the volume of the box
    printf("= %d\n", b);

    // Compare the total volume of packs with the volume of the box
    if (a != b)
    {
        if (a > b)
        {
            // Calculate and output the remaining space in terms of packs if box is smaller
            sum = a - b;
            sum = sum / volume1;
            printf("box space left = %d", sum);
        }
        else
        {
            // Calculate and output the remaining space in terms of packs if box is larger
            sum = b - a;
            sum = sum / volume1;
            printf("box space left = %d", sum);
        }
    }
    else
    {
        // Output if the total volume of packs is equal to the volume of the box
        printf("y");
    }

    return 0;
}
