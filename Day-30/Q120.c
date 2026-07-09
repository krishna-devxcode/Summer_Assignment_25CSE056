#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudents(struct Student s[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n) {
    int i;

    printf("\n===== Student Records =====\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll Number : %d", s[i].roll);
        printf("\nName        : %s", s[i].name);
        printf("\nMarks       : %.2f\n", s[i].marks);
    }
}

void searchStudent(struct Student s[], int n) {
    int roll, i;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nStudent Found");
            printf("\nName  : %s", s[i].name);
            printf("\nMarks : %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Student Not Found.\n");
}

int main() {
    int n, choice;
    struct Student s[100];

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    addStudents(s, n);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Display Students\n");
        printf("2. Search Student\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayStudents(s, n);
                break;

            case 2:
                searchStudent(s, n);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 3);

    return 0;
}