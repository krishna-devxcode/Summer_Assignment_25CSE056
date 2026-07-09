#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] == '\n') {
        printf("Number of words = 0");
        return 0;
    }

    while (str[i] != '\0') {
        if (str[i] == ' ')
            words++;
        i++;
    }

    printf("Number of words = %d", words);

    return 0;
}