#include <stdio.h>

struct Contact {
    char name[50];
    char mobile[15];
};

int main() {
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    struct Contact c[n];

    for(i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Mobile Number: ");
        scanf("%s", c[i].mobile);
    }

    printf("\n===== Contact List =====\n");

    for(i = 0; i < n; i++) {
        printf("\nName   : %s", c[i].name);
        printf("\nMobile : %s\n", c[i].mobile);
    }

    return 0;
}