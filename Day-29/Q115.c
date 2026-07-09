#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int choice, i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n===== STRING MENU =====\n");
        printf("1. String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Length = %lu\n", strlen(str));
            break;

        case 2:
            len = strlen(str);
            for(i = 0; i < len / 2; i++) {
                temp = str[i];
                str[i] = str[len - 1 - i];
                str[len - 1 - i] = temp;
            }
            printf("Reversed String = %s\n", str);
            break;

        case 3:
            for(i = 0; str[i] != '\0'; i++)
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;

            printf("Uppercase = %s\n", str);
            break;

        case 4:
            printf("Exit...\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}