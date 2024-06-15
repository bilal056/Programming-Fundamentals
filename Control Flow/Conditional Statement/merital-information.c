#include <stdio.h>

/*
This program calculates the tax based on the user's marital status and salary details.
It prompts the user to enter their marital status (married or single).
If the user is single, it asks for their salary and calculates the tax based on predefined salary ranges.
If the user is married, it asks whether their spouse has a job.
Depending on the response, it either asks for the user's salary (if the spouse does not have a job)
or both the user's and the spouse's salaries (if the spouse has a job).
The program then calculates the tax based on the provided salary details.
*/

int main() {
    // Variables to store salary details
    int single, married; // Variables to store salary for single and married individuals
    char ans; // Variable to store user's response for marital status
    char Ans2; // Variable to store user's response for spouse's job status
    int wife, husbend; // Variables to store wife's and husband's salaries
    int ans3; // Variable to store combined salary of husband and wife

    // Prompt user for marital status
    printf("Enter 'y' for married and 'n' for single: ");
    scanf(" %c", &ans); // Note the space before %c to consume any leading whitespace

    // If user is single, ask for salary details
    if (ans == 'n' || ans == 'N') {
        printf("Enter your salary: ");
        scanf("%d", &single);

        // Calculate and display tax based on salary range
        if (single > 0 && single < 15000) {
            single = single - 2250;
            printf("Your total tax will be: %d\n", single);
        } else if (single >= 15000 && single < 40000) {
            single = single - 10000;
            single = single - 2250;
            printf("Your total tax will be: %d\n", single);
        } else if (single >= 40000) {
            single = single - 14000;
            single = single - 8460;
            printf("Your total tax will be: %d\n", single);
        }
    }
    // If user is married, ask if spouse has a job
    else if (ans == 'y' || ans == 'Y') {
        printf("Does your spouse have a job? (Enter 'y' or 'n'): ");
        scanf(" %c", &Ans2); // Note the space before %c to consume any leading whitespace

        // If spouse does not have a job, ask for user's salary
        if (Ans2 == 'n' || Ans2 == 'N') {
            printf("Enter your salary: ");
            scanf("%d", &married);

            // Calculate and display tax based on salary range
            if (married > 0 && married < 15000) {
                married = married - 2250;
                printf("Your total tax will be: %d\n", married);
            } else if (married >= 15000 && married < 40000) {
                married = married - 10000;
                married = married - 2250;
                printf("Your total tax will be: %d\n", married);
            } else if (married >= 40000) {
                married = married - 14000;
                married = married - 8460;
                printf("Your total tax will be: %d\n", married);
            }
        }
        // If spouse has a job, ask for both salaries
        else if (Ans2 == 'y' || Ans2 == 'Y') {
            printf("Enter your spouse's salary: ");
            scanf("%d", &wife);
            printf("Enter your salary: ");
            scanf("%d", &husbend);

            // Combine both salaries and calculate tax
            ans3 = wife + husbend;

            // Calculate and display tax based on combined salary range
            if (ans3 > 0 && ans3 < 15000) {
                ans3 = ans3 - 2250;
                printf("Your total tax will be: %d\n", ans3);
            } else if (ans3 >= 15000 && ans3 < 40000) {
                ans3 = ans3 - 10000;
                ans3 = ans3 - 2250;
                printf("Your total tax will be: %d\n", ans3);
            } else if (ans3 >= 40000) {
                ans3 = ans3 - 14000;
                ans3 = ans3 - 8460;
                printf("Your total tax will be: %d\n", ans3);
            }
        }
    }

    return 0;
}
