#include <stdio.h>

int main()
{
    // Declare variables
    char membership;
    int age;

    // Get user input for age
    printf("Enter the Age :");
    scanf("%d", &age);

    // Get user input for membership
    printf("If you are a Member m/n\n");
    scanf("%s", &membership);

    // Check membership type and age to determine payment
    if (membership == 'm')
    {
        // Check if member is a senior
        if (age >= 65)
        {
            printf("You have to Pay 5$");
        }
        else
        {
            printf("You have to Payss 10$"); // Note: Typo in "Payss"
        }
    }
    else
    {
        printf("You have to Pay 20$");
    }

    return 0;
}
