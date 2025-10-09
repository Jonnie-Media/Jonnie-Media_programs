#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 20 (inclusive)
    int secretNumber = rand() % 20 + 1;

    // Initialize variables to track attempts and guess
    int attempts = 0;
    int guess;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    while (1) {
        // Prompt the player to enter a guess
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Increment attempts
        attempts++;

        // Check the guess
        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}