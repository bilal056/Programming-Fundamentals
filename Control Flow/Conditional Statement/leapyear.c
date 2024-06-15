#include <stdio.h>

// This program checks whether a given year is a leap year or not.
// A year is a leap year if it is divisible by 400, or if it is divisible by 4 but not by 100.
// The program takes a year as input from the user and prints whether it is a leap year or not.

int main() {
    int leap;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &leap);

    // Check if the year is divisible by 400
    if (leap % 400 == 0) {
        printf("Leap year\n");
    }
    // Check if the year is divisible by 100
    else if (leap % 100 == 0) {
        printf("Not a leap year\n");
    }
    // Check if the year is divisible by 4
    else if (leap % 4 == 0) {
        printf("Leap year\n");
    }
    // If none of the above conditions are met, it is not a leap year
    else {
        printf("Not a leap year\n");
    }

    return 0;
}
