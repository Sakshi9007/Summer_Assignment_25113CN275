#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secret_number, guess;
    int attempts = 0;

    // Seed the random number generator using the current system time
    srand(time(NULL));

    // Generate a random secret number between 1 and 100
    secret_number = (rand() % 100) + 1;

    printf("-----------------------------------------\n");
    printf("  Welcome to the Number Guessing Game!   \n");
    printf("-----------------------------------------\n");
    printf("I have selected a secret number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");

    // Loop until the user guesses the correct number
    do 
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);

        //validate input
        if (guess < 1 || guess > 100)
        {
            printf("Please enter a number between 1 and 100.\n\n");
            continue;
        }
        
        attempts++; // Increment the attempt counter

        // Provide feedback based on the player's guess
        if (guess > secret_number) 
        {
            printf("Too High! Try a smaller number.\n\n");
        } 
        else if (guess < secret_number) 
        {
            printf("Too Low! Try a larger number.\n\n");
        } 
        else 
        {
            printf("\nCONGRATULATIONS! You found it!\n");
            printf("The secret number was: %d\n\n", secret_number);
            printf("It took you exactly %d attempts to win.\n\n", attempts);
        }

    } 
    while (guess != secret_number);

    printf("Thank you for playing! ^.^\n");
    
    return 0;
}
