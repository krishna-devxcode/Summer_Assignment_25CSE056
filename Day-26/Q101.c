#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");

    do {
        printf("Guess a number (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed correctly.\n");

    } while (guess != number);

    printf("Total Attempts = %d\n", attempts);

    return 0;
}