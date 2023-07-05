#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Each of our text files contains 1000 words
#define LISTSIZE 1000

// Values for colors and score (EXACT == right letter, right place; CLOSE == right letter, wrong place; WRONG == wrong letter)
#define EXACT 2
#define CLOSE 1
#define WRONG 0

// ANSI color codes for boxed in letters
#define GREEN   "\e[38;2;255;255;255;1m\e[48;2;106;170;100;1m"
#define YELLOW  "\e[38;2;255;255;255;1m\e[48;2;201;180;88;1m"
#define RED     "\e[38;2;255;255;255;1m\e[48;2;220;20;60;1m"
#define RESET   "\e[0;39m"

// User-defined function prototypes
char* get_guess(int wordsize);
int check_word(char* guess, int wordsize, int status[], char* choice);
void print_word(char* guess, int wordsize, int status[]);

int main(int argc, char* argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./wordle wordsize\n");
        return 1;
    }

    int wordsize = 0;

    // Ensure argv[1] is either 5, 6, 7, or 8 and store that value in wordsize
    for (int i = 5; i <= 8; i++)
    {
        if (atoi(argv[1]) == i)
        {
            wordsize = i;
            break;
        }
    }

    if (wordsize == 0)
    {
        printf("Error: wordsize must be either 5, 6, 7, or 8\n");
        return 1;
    }

    // Open the correct file, each file has exactly LISTSIZE words
    char wl_filename[7];
    sprintf(wl_filename, "%d.txt", wordsize);
    FILE* wordlist = fopen(wl_filename, "r");
    if (wordlist == NULL)
    {
        printf("Error opening file %s.\n", wl_filename);
        return 1;
    }

    // Load word file into an array of size LISTSIZE
    char options[LISTSIZE][wordsize + 1];

    for (int i = 0; i < LISTSIZE; i++)
    {
        fscanf(wordlist, "%s", options[i]);
    }

    // Pseudorandomly select a word for this game
    srand(time(NULL));
    char* choice = options[rand() % LISTSIZE];

    // Allow one more guess than the length of the word
    int guesses = wordsize + 1;
    int won = 0;

    // Print greeting, using ANSI color codes to demonstrate
    printf(GREEN "This is WORDLE50" RESET "\n");
    printf("You have %d tries to guess the %d-letter word I'm thinking of\n", guesses, wordsize);

    // Main game loop, one iteration for each guess
    for (int i = 0; i < guesses; i++)
    {
        // Obtain user's guess
        char* guess = get_guess(wordsize);

        // Array to hold guess status, initially set to wrong
        int status[wordsize];

        // Set all elements of status array initially to 0, aka WRONG
        for (int j = 0; j < wordsize; j++)
        {
            status[j] = WRONG;
        }

        // Calculate score for the guess
        int score = check_word(guess, wordsize, status, choice);

        printf("Guess %d: ", i + 1);

        // Print the guess
        print_word(guess, wordsize, status);

        // If they guessed it exactly right, set terminate loop
        if (score == EXACT * wordsize)
        {
            won = 1;
            break;
        }
    }

    // Print the game's result
    if (won)
    {
        printf("You won!\n");
    }
    else
    {
        printf("You lose!\nThe correct word was %s\n", choice);
    }

    // Close the file
    fclose(wordlist);

    // That's all, folks!
    return 0;
}

char* get_guess(int wordsize)
{
    char* guess = malloc((wordsize + 1) * sizeof(char));

    // Ensure users actually provide a guess that is the correct length
    do
    {
        printf("Input a %d-letter word: ", wordsize);
        scanf("%s", guess);
    } while (strlen(guess) != wordsize);

    return guess;
}

int check_word(char* guess, int wordsize, int status[], char* choice)
{
    int score = 0;

    // Compare guess to choice and score points as appropriate, storing points in status
    for (int i = 0; i < wordsize; i++)
    {
        for (int j = 0; j < wordsize; j++)
        {
            if (guess[i] == choice[j])
            {
                if (i == j)
                {
                    score += EXACT;
                    status[i] = EXACT;
                    break;
                }
                else
                {
                    score += CLOSE;
                    status[i] = CLOSE;
                }
            }
        }
    }
    return score;
}

void print_word(char* guess, int wordsize, int status[])
{
    // Print word character-by-character with correct color coding, then reset terminal font to normal
    for (int i = 0; i < wordsize; i++)
    {
        if (status[i] == EXACT)
        {
            printf(GREEN "%c" RESET, guess[i]);
        }
        else if (status[i] == CLOSE)
        {
            printf(YELLOW "%c" RESET, guess[i]);
        }
        else
        {
            printf(RED "%c" RESET, guess[i]);
        }
    }
    printf("\n");
}
