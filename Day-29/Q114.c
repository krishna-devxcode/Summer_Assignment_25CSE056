#include <stdio.h>

int main() {
    int n, i, choice;
    int arr[100], max, min, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n===== ARRAY MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Maximum Element\n");
        printf("3. Minimum Element\n");
        printf("4. Sum of Elements\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Array: ");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 2:
            max = arr[0];
            for(i = 1; i < n; i++)
                if(arr[i] > max)
                    max = arr[i];
            printf("Maximum = %d\n", max);
            break;

        case 3:
            min = arr[0];
            for(i = 1; i < n; i++)
                if(arr[i] < min)
                    min = arr[i];
            printf("Minimum = %d\n", min);
            break;

        case 4:
            sum = 0;
            for(i = 0; i < n; i++)
                sum += arr[i];
            printf("Sum = %d\n", sum);
            break;

        case 5:
            printf("Exit...\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while(choice != 5);

    return 0;
}