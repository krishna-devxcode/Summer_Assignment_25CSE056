#include <stdio.h>

int main() {
    int n, i, sum = 0, expected, missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expected = (n + 1) * (n + 2) / 2;
    missing = expected - sum;

    printf("Missing number = %d", missing);

    return 0;
}