#include <stdio.h>

/*
Description:
This program demonstrates the use of arrays to find the minimum, maximum, sum, and average of a set of numbers.
*/

int main() {
    int arr[10] = {2, 4, 6, 8, 1, 3, 5, 7, 10, 13}; // Initializing an array with 10 elements
    int min, max, sum = 0; // Initializing variables for minimum, maximum, and sum
    double avg; // Initializing variable for average

    // Print array elements
    printf("Array elements: ");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    // Find minimum value
    min = arr[0];
    for (int j = 1; j < 10; j++) {
        if (min > arr[j]) {
            min = arr[j];
        }
    }
    printf("The minimum value is %d\n", min);

    // Find maximum value
    max = arr[0];
    for (int j = 1; j < 10; j++) {
        if (max < arr[j]) {
            max = arr[j];
        }
    }
    printf("The maximum value is %d\n", max);

    // Calculate sum
    for (int j = 0; j < 10; j++) {
        sum += arr[j];
    }
    printf("The sum value is %d\n", sum);

    // Calculate average
    avg = (double)sum / 10;
    printf("Average = %.2lf\n", avg);

    return 0;
}

