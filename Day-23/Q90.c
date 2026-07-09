#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                printf("First repeating character = %c", str[i]);
                found = 1;
                return 0;
            }
        }
    }

    if(!found)
        printf("No repeating character found.");

    return 0;
}