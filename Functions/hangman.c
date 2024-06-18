#include <stdio.h>
#include <stdlib.h> // using rand() for random choose
#include <time.h>  // 

#define MAX_WORDS 15
#define MAX_WORD_LENGTH 20

/* 
Hangman Game
Description:
This program implements a simple hangman game where the player has to guess a word chosen randomly from a predefined list of words. 
The player has a limited number of guesses to correctly guess all the letters in the word. 
If the player guesses a correct letter, it is revealed in the word; otherwise, the number of remaining guesses decreases.

The game continues until the player guesses all the letters correctly or runs out of guesses.

*/


// List of words
const char word_list[MAX_WORDS][MAX_WORD_LENGTH] = {
    "physics",
    "computer",
    "hangman",
    "cat",
    "fruit",
    "function",
    "variable",
    "thread",
    "array",
    "word",
    "loop",
    "condition",
    "ram",
    "storage",
    "array",
};

// Function to choose a random word from the list
void choose_random_word(char word[], const char word_list[][MAX_WORD_LENGTH], int max_words)
{
    int index = rand() % max_words; // Uses rand() to get a random index
    int i;
    for (i = 0; word_list[index][i] != '\0'; i++) // we can use any condition in for loop 
    {
        word[i] = word_list[index][i];
    }
    word[i] = '\0';
}

// Function to update the display word with the guessed letter
int update_display_word(char display_word[], const char word[], char guess)
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == guess)
        {
            display_word[i] = guess;
            count++;
        }
    }
    return count;
}

// Function to check if the guessed letter is in the word
int check_letter(const char word[], char guess)
{
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == guess)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    srand(time(0)); // Seed the random number generator
    /*
    By using srand(time(0)), you ensure that each time you run the program, the random numbers generated are different. 
    If you don't seed the random number generator, it will produce the same sequence of numbers each time you run the program,
    which is not desirable for many applications, especially games or simulations where randomness is important. 
    */
    
    int max_guesses = 8;

    char word[MAX_WORD_LENGTH];
    char display_word[MAX_WORD_LENGTH];
    char guess;
    int wrong_guesses = 0;
    int correct_guesses = 0;
    int word_length = 0;
    int i;

    // Choose a random word from the list
    choose_random_word(word, word_list, MAX_WORDS);

    // Get the length of the chosen word
    while (word[word_length] != '\0')
    {
        word_length++;
    }

    // Initialize the display word with underscores
    for (int i = 0; i < word_length; i++)
    {
        display_word[i] = '_';
    }
    display_word[word_length] = '\0';

    printf("Welcome to Hangman!\n");
    printf("Guess the word: %s\n", display_word);

    // Game loop
    while (wrong_guesses < max_guesses && correct_guesses < word_length)
    {
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        if (check_letter(word, guess))
        {
            correct_guesses += update_display_word(display_word, word, guess);
            printf("Correct! %s\n", display_word);
        }
        else
        {
            wrong_guesses++;
            printf("Wrong! You have %d guesses left.\n", max_guesses - wrong_guesses);
        }
    }

    if (correct_guesses == word_length)
    {
        printf("Congratulations! You guessed the word: %s\n", word);
    }
    else
    {
        printf("You lost! The word was: %s\n", word);
    }

    return 0;
}
