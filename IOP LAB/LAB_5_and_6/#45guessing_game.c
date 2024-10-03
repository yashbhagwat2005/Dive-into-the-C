#include <stdio.h>

int main() {
    // declaring lucky_number as a integer and initilizing a random number to it 
    int lucky_number = 7;
    // declaring guess,attempts as a integer
    int guess, attempts = 5;
    printf("Guess the lucky number (1 to 10). You have %d attempts.\n", attempts);
    // input from the user for guesses 
    for (int i = 0; i < attempts; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == lucky_number) {
            printf("Congratulations! You guessed the lucky number!\n");
            break;
        } else if (guess < lucky_number) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }

        printf("%s\n", (i == attempts - 1) ? "Game over! You ran out of attempts." : "Try again.");
    }

    return 0;
}
