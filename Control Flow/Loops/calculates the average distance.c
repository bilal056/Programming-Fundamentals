/*
Description:
This program calculates the distance and average steps taken between a series of 2D points (x, y) entered by the user. It uses the distance formula between two points in a plane to calculate the distance. The program continues to accept input until the user enters the same point twice consecutively, at which point it calculates the total number of steps taken and the average distance per step.

*/

#include <stdio.h>
#include <math.h>

int main()
{

    float p, x1 = 0, x2, y1 = 0, y2, i, j, count = 0, average, c, sum = 0;

    // Loop to input 2D points and calculate distance
    for (i = 0; i < j + 1; i++)
    {
        x1 = x2;
        y1 = y2;
        printf("Enter number of x2 : ");
        scanf("%f", &x2);

        printf("Enter number of y2 : ");
        scanf("%f", &y2);
        // Calculating distance between points
        p = pow(2, x2 - x1) + pow(2, y2 - y1);
        p = sqrt(p);
        printf(" distance is %f\n", p);

        sum = p + sum;

        // Checking for consecutive same points to exit the loop
        if ((x1 != x2) && (y1 != y2))
        {
            j++;
        }
        else
        {
            break;
        }
        count++;
    }
    printf("no of steps : %f\n", count++);
    average = sum + p;
    average /= 2;
    printf("average steps  %f\n", average);

    return 0;
}
