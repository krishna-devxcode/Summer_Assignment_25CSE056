#include <stdio.h>

int main() {
    int seats = 50;
    int book, choice;

    do {
        printf("\n===== Ticket Booking =====\n");
        printf("Available Seats: %d\n", seats);

        printf("Enter number of seats to book: ");
        scanf("%d", &book);

        if(book <= seats) {
            seats -= book;
            printf("Booking Successful!\n");
            printf("Remaining Seats = %d\n", seats);
        } else {
            printf("Not enough seats available!\n");
        }

        printf("\nBook Again?\n");
        printf("1. Yes\n2. No\n");
        scanf("%d", &choice);

    } while(choice == 1);

    printf("Thank You!\n");

    return 0;
}