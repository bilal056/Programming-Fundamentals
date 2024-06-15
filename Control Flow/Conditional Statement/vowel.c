#include <stdio.h>

/* Program to determine if a character is a vowel or a consonant */

int main()
{
    // Declare character variables
    char uppercase, n, lowercase;

    // Prompt the user to enter a character
    printf("Enter any character: ");
    scanf("%c", &n);

    // Check if the entered character is an uppercase vowel
    uppercase = (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U');

    // Check if the entered character is a lowercase vowel
    lowercase = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u');

    // If the character is a vowel (either uppercase or lowercase), print it as a vowel
    if (uppercase || lowercase)
    {
        printf("%c is a vowel.\n", n);
    }
    // If the character is not a vowel, print it as a consonant
    else
    {
        printf("%c is a consonant.\n", n);
    }

    return 0;
}
