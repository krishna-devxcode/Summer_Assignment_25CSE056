#include <stdio.h>

int main() {
    char name[50];
    int i;
    float marks[5], total = 0, percentage;
    char grade;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5;

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 75)
        grade = 'B';
    else if(percentage >= 60)
        grade = 'C';
    else if(percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n------ MARKSHEET ------\n");
    printf("Name       : %s\n", name);
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}