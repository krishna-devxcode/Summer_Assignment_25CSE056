#include <stdio.h>

int main() {
    int n, i, a = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        a = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                a = 0;
                break;
            }
        }
    }

    if (a)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is not a Prime Number.\n", n);

    return 0;
}