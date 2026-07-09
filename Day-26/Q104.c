#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("===== QUIZ =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &ans);
    if(ans == 2)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;

    printf("\n3. 2 + 3 = ?\n");
    printf("1. 4\n2. 5\n3. 6\n4. 7\n");
    scanf("%d", &ans);
    if(ans == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}