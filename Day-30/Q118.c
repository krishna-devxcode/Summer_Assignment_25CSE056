#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);
    }

    printf("\n===== Library =====\n");

    for(i = 0; i < n; i++) {
        printf("\nID     : %d", b[i].id);
        printf("\nTitle  : %s", b[i].title);
        printf("\nAuthor : %s\n", b[i].author);
    }

    return 0;
}